#include <iostream>
#include <string>
#include <sstream>
#include "Interface_DateTimeSettingType.h"


void DateTimeType::set_Day(const std::string& input) {
    try { 
        float set_day;
        std::istringstream iss(input); // we create from this liblary object to set the convert the string to 
                                       // array of the char then compare it between number using index

        if (!(iss >> set_day)) {
            throw "Error: The Day can not be as text \n";
        } else if (set_day < 1) {
            throw "Error: The Day cannot be 0 or Negative.\n";
        } else if (set_day > 31) {
            throw "Error: The Day cannot exceed 31.\n";
        } else if (isFraction(set_day) == false) {
           throw "Error: The Day cannot be as fraction\n";
        } else { 
            day = set_day;
        }

    }
    catch (const char* e) {
        std::cout << e ;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    } 
}

bool DateTimeType::IsDayValied() const {
    return (day > 1  && day <= 31);
}

float DateTimeType::get_Day() const {
    return day; 
}

void DateTimeType::set_Month(const std::string& input) {
    try { 
        float set_month;
        std::istringstream iss(input); // we create from this liblary object to set the convert the string to 
                                       // array of the char then compare it between number using index

        if (!(iss >> set_month)) {
            throw "Error: The Month can not be as text \n";
        } else if (set_month < 1) {
            throw "Error: The Month cannot be 0 or Negative.\n";
        } else if (set_month > 12) {
            throw "Error: The Month cannot exceed 12.\n";
        } else if (isFraction(set_month) == false) {
            throw "Error: The Month cannot be franction \n";
        } else {
            month = set_month;
        }

    } catch (const char* e) {
        std::cout << e ;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    } 
} 

bool DateTimeType::IsMonthValied() const {
    return ((month > 1) && (month  < 13));
}

float DateTimeType::get_Month() const  {
    return month;
} 

void DateTimeType::set_Year(const std::string& input) {
    try { 
        float set_year;
        std::istringstream iss(input); // we create from this liblary object to set the convert the string to 
                                       // array of the char then compare it between number using index

        if (!(iss >> set_year)) {
            throw "Error: The Month can not be as text \n";
        } else if (set_year < 1900 ) {
            throw "Error: The Month cannot be less than 1900 or Negative.\n";
        } else if (set_year > 2300) {
            throw "Error: The Month cannot exceed 2300.\n";
        } else if (isFraction(set_year) == false) {
            throw "Error: The Year cannot be franction \n";
        } else {
            year = set_year;
        }

    } catch (const char* e) {
        std::cout << e ;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    } 
} 

bool DateTimeType::IsYearValied() const {
    return ((year > 1900) && (year < 2300));
}

float DateTimeType::get_Year() const {
    return year;
} 

void DateTimeType::set_Hour(const std::string& input) {
    try { 
        float set_hour;
        std::istringstream iss(input); // we create from this liblary object to set the convert the string to 
                                       // array of the char then compare it between number using index

        if (!(iss >> set_hour)) {
            throw "Error: The Hour can not be as text \n";
        } else if (set_hour > 24 ) {
            throw "Error: The Hour cannot be excued than 24.\n";
        } else if (set_hour < 0) {
            throw "Error: The hour can not  be ne less than 0 or negative .\n";
        } else if (isFraction(set_hour) == false) {
            throw "Error : The hour cannot be franction \n";
        } else {
            hour = set_hour;
        }

    } catch (const char* e) {
        std::cout << e ;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    } 
}

bool DateTimeType::IsHourValied() const {
    return ((hour < 24) && (hour > 0));
}

float DateTimeType::get_Hour() const {
    return hour;
}

void DateTimeType::set_Minute(const std::string& input) {
    try { 
        float set_minute;
        std::istringstream iss(input); // we create from this liblary object to set the convert the string to 
                                       // array of the char then compare it between number using index

        if (!(iss >> set_minute)) {
            throw "Error: The Minute can not be as text \n";
        } else if (set_minute > 60 ) {
            throw "Error: The Minute cannot be excued than 60.\n";
        } else if (set_minute < 0) {
            throw "Error: The Minute can not  be ne less than 0 or negative .\n";
        } else if (isFraction(set_minute) == false) {
            throw "Error: The Minute can not be franction \n";
        } else {
            minute = set_minute;
        }

    } catch (const char* e) {
        std::cout << e ;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    } 
}

bool DateTimeType::IsMinuteValied() const {
    return ((minute < 60) && (minute > 0));
}

float DateTimeType::get_Minute() const {
    return minute;
}

void DateTimeType::set_Secound(const std::string& input) {
    // make exception 
    // secound  > 0 secound < 60 
    try { 
        float set_secound;
        std::istringstream iss(input); // we create from this liblary object to set the convert the string to 
                                       // array of the char then compare it between number using index

        if (!(iss >> set_secound)) {
            throw "Error: The Secound can not be as text \n";
        } else if (set_secound > 60 ) {
            throw "Error: The Secound cannot be excued than 60.\n";
        } else if (set_secound < 0) {
            throw "Error: The secound can not  be ne less than 0 or negative .\n";
        } else if (isFraction(set_secound) == false) {
            throw "Error: The secound can not be as fraction \n";
        } else {
            secound = set_secound;
        }

    } catch (const char* e) {
        std::cout << e ;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    } 
}

bool DateTimeType::IsSecoundValied() const {
    return ((secound < 60) && (secound > 0));
}

float DateTimeType::get_Secound() const {
    return secound;
}

void DateTimeType::print() const { 
    std::cout << "Date : ";
    if (day < 10 ) {
        std::cout << "0" << day << "-";
    } else {
        std::cout << day << "-";
    }

    if(month < 10) {
        std::cout << "0" << month << "-" << year << std::endl;
    } else {
        std::cout << month << "-" << year << std::endl;
    }
    
    std::cout << "Time : ";
    if (hour < 10) {
        std::cout << "0" << hour << ":";
    } else {
        std::cout << hour << ":";
    } 

    if (minute < 10) {
        std::cout << "0" << minute << ":";
    } else {
        std::cout << minute << ":";
    }

    if (secound < 10) {
        std::cout << "0" << secound << std::endl;
    } else {
        std::cout << secound << std::endl;
    }

}  


bool DateTimeType::isFraction(float number) const {
    number = number - (static_cast<int>(number));
    if (number == 0)
        return true;
    else 
        return false;
}
