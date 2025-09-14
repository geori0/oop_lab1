#include <iostream>
#include <string>
#include "include/time.h"
int main() {
    std::string timeStr, mode;
    std::cin >> timeStr >> mode;
    std::string hoursStr, minutesStr;
    if (timeStr.empty()) {
        std::cerr << "Ошибка: неверная запись времени" << std::endl;
        return 1;
    }
    if ((mode != "am") && (mode != "pm")) {
        std::cerr << "Ошибка: неверная запись времени" << std::endl;
        return 1;
    }
    for (size_t i = 0; i != timeStr.size(); ++i) {
        if (timeStr[i] == ':') {
            hoursStr = timeStr.substr(0, i);
            minutesStr = timeStr.substr(i + 1);
            break;
        }
    }
    int hours = std::stoi(hoursStr);
    int minutes = std::stoi(minutesStr);
    if ((hours < 1) || (hours > 12)) {
        std::cerr << "Ошибка: диапазон часов - от 1 до 12" << std::endl;
        return 1;
    }
    if ((minutes < 0) || (minutes > 59)) {
        std::cerr << "Ошибка: диапазон минут - от 0 до 59" << std::endl;
        return 1;
    }
    std::cout << time(hours, minutes, mode) << std::endl;
    return 0;
}