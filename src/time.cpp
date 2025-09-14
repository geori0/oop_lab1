#include "../include/time.h"
#include <string>
#include <iostream>

std::string time(int hours, int minutes, std::string mode) {
    std::string hoursString, minutesString;
    if ((mode == "pm") && (hours != 12)) {
        hours = hours + 12;
    }
    if ((mode == "pm") && (hours == 12) && (minutes == 0)) {
        hours = 0;
    } 
    if ((mode == "pm") && (hours == 12) && (minutes != 0)) {
        hours = 12;
    }
    if ((mode == "am") && (hours == 12) && (minutes != 0)) {
        hours = 0;
    }
    if ((hours / 10) == 0) {
        hoursString = "0" + std::to_string(hours);
    } else {
        hoursString = std::to_string(hours);
    }
    if ((minutes / 10) == 0) {
        minutesString = "0" + std::to_string(minutes);
    } else {
        minutesString = std::to_string(minutes);
    }
    return hoursString + minutesString;
}