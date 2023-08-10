#include "Interface_DateTimeSettingType.h"
#include <iostream>
int main() {

    std::string day;
    std::string month;
    std::string year;
    std::string hour, minute, secound;
    DateTimeType datetime;
    do {
        std::cout << "Enter the day: ";
        std::cin >> day;
        datetime.set_Day(day);
    } while (!datetime.IsDayValied());

    // std::cout << "Valid day: " << datetime.get_Day() << std::endl;
    do { 
        std::cout << "Enter the month : ";
        std::cin >> month;
        datetime.set_Month(month);
    } while (!datetime.IsMonthValied());

    do {
        std::cout << "Enter the year : ";
        std::cin >> year;
        datetime.set_Year(year);
    } while (!datetime.IsYearValied());

    do {
        std::cout << "Enter the hour : ";
        std::cin  >> hour;
        datetime.set_Hour(hour);
    } while (!datetime.IsHourValied());

    do {
        std::cout << "Enter the minute : ";
        std::cin >> minute;
        datetime.set_Minute(minute);
    } while (!datetime.IsMinuteValied());

    do {
        std::cout << "Enter the secound : ";
        std::cin >> secound;
        datetime.set_Secound(secound);
    } while (!datetime.IsSecoundValied());




    return 0;
}
