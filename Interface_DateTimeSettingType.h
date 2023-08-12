#include <iostream>
#include <fstream>

class DateTimeType {
    private: int day;
    private: int month;
    private: int year;
    private: int hour;
    private: int minute;
    private: int secound;

    // for set,cheack and get the day 
    public: void set_Day(const std::string& input);
    public: bool IsDayValied() const;
    public: int get_Day() const;

    // for set,cheack and get the month
    public: void set_Month(const std::string& input);
    public: bool IsMonthValied() const;
    public: int get_Month() const;

    // for set,cheack and get the year
    public: void set_Year(const std::string& input);
    public: bool IsYearValied() const;
    public: int get_Year() const;

    // for set,cheack and get the hour
    public: void set_Hour(const std::string& input);
    public: bool IsHourValied() const;
    public: int get_Hour() const;

    // for set,cheack and get the minute
    public: void set_Minute(const std::string& input);
    public: bool IsMinuteValied() const;
    public: int get_Minute() const;

    //for set, cheack and get the secound
    public: void set_Secound(const std::string& input);
    public: bool IsSecoundValied() const;
    public: int get_Secound() const;

    // for print the Date and the Time in the file 
    public: void print() const;
};
