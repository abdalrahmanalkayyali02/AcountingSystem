---
# DateTimeType 
__DateTimeType discribtion:__
# The class Include :
1. ***settin the day***  
setter and getter for the day and cheacking it  :  
* void set_Day(const std::string& input);  
//this function we use to set the set the date and using exception it cheacking function to show if is it right or 
not  no text no day hight than 31 no day less than 1
* bool IsDayValied() const;  
// This function we use to cheack if the condition that was put int he set day was be done correctly or not if yse we will return true else false  
* int get_Day() const;  
// This functionnwe use to return the day value  
2. ***setting the month***  
setter and getter for the month and cheacking it :  
* void set_Month(const std::string& input);  
// this function we use to set the month data and using exception we use to cheack the data the exception rule  here is no text or string no month hight than 12 no month less than 1  
* bool IsMonthValied() const;  
// this function we use to set cheack if the condition that we put in the set month was been done corectly or not it its done we will return true else return false  
* int get_Month() const;  
// this function we use to return the month value  
3. ***setting the year***  
setter and getter for the year and cheacking it :  
* void set_Year(const std::string& input);  
// this function we use to set the month data are using exception at least the year is 1900 and at most 2300  
* bool IsYearValied() const;  
// this function we use to cheack if the set year is do correctly or not if yes return true else return false   
* int get_Year() const;  
// this function we use to return the year value   
4. ***setting the hour***  
setter and getter for the hour and cheacking for it :
* void set_hour(const std::string& input);  
// this function we use to set the hour the hour excpetion is that at least 1 hour and at the most 24 hour and no text  
* bool IsHourValied() const;  
// this function is used to cheack if the condotion was been done corectly or not if yes wil return true else we will return false  
* int get_Hour() const;
// this function is used to getter the data and return it the same condition  
5. ***setting the minute***  
setter and getter for the cheacking for it :  
* void set_minute(const std::string& input);  
// for set the minute the condition the minute to set the exception rule is : no string as text , minute at least 1 mand at most 60  
* bool IsMinuteValied() const;  
// for cheacking if the condeition is been done true of note on the set minute if it  bee correct we will return true else we will return false   
* int get_Minute() const;  
// for return the minute value   

6. ***setting the Secound**   
setter and getter and cheacking for it :  
* void set_Secound(const std::string& input);  
// for set the secound value the exception thats rule is : if exception  no text , at least 1 and at most 60  
* bool IsSecoundValied() const;  
// for cheacking for the set secound condition if its be done correckt or not if yes return true else return false  
* int get_Secound() const;  
// we use this for return the secound value  
7. ***print*** 
* void print(std::ostream) const;  
// print the data time and date in file  
8. ***constructer***  
there is two type of constructer here :  
* deafult constructer : DateTime();  
// that set all artibute for less data avariable we cen   
* parameter constructer :  
DateTime  
(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);


