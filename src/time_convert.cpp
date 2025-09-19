#include "time_convert.h"

#include <string>

std::string TimeConvert(int hours, int minutes, const std::string mode) {
  std::string hours_string, minutes_string;

  if (mode == "pm") {
    if (hours == 12) {
      if (minutes == 0) {
        hours = 0;
      } else {
        hours = 12;
      }
    } else {
      hours += 12;
    }
  }

  if ((mode == "am") && (hours == 12) && (minutes != 0)) {
    hours = 0;
  }

  if ((hours / 10) == 0) {
    hours_string = "0" + std::to_string(hours);
  } else {
    hours_string = std::to_string(hours);
  }

  if ((minutes / 10) == 0) {
    minutes_string = "0" + std::to_string(minutes);
  } else {
    minutes_string = std::to_string(minutes);
  }

  return hours_string + minutes_string;
}