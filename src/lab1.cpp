#include "time_convert.h"

#include <iostream>
#include <string>

int main() {
  std::string time_str, mode;
  std::cin >> time_str >> mode;
  std::string hours_str, minutes_str;

  if (time_str.empty()) {
    std::cerr << "Ошибка: пустая строка" << std::endl;
    return 1;
  }
  if ((mode != "am") && (mode != "pm")) {
    std::cerr << "Ошибка: неверные обозначения времени(выбрать am или pm)"
              << std::endl;
    return 1;
  }

  for (size_t i = 0; i != time_str.size(); ++i) {
    if (time_str[i] == ':') {
      hours_str = time_str.substr(0, i);
      minutes_str = time_str.substr(i + 1);
      break;
    }
  }

  const int hours = std::stoi(hours_str);
  const int minutes = std::stoi(minutes_str);

  if ((hours < 1) || (hours > 12)) {
    std::cerr << "Ошибка: диапазон часов - от 1 до 12" << std::endl;
    return 1;
  }
  if ((minutes < 0) || (minutes > 59)) {
    std::cerr << "Ошибка: диапазон минут - от 0 до 59" << std::endl;
    return 1;
  }

  std::cout << TimeConvert(hours, minutes, mode) << std::endl;
  return 0;
}