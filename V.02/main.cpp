#include <iostream>
#include <vector>
#include "Interface_DateTimeSettingType.h"
#include "Interface_AccountingType.h"

std::string convertToText(int number);
bool cheack_id_pass(std::string, std::string);
void displayScreen();

int main() {

    std::string user_id, user_pass;
    int try_number = 3;
    bool result = 0;
    std::string day, month, year; // set date
    std::string hour, minute, secound;  // set yea
    std::string Income_size, Expenss_size; // for set the income and expenss size
    std::string product_quantity, product_price; // set quantity and price
    std::string product_name, product_discribtion;  // set name, and discibtion

    int convertIncome, convertExpenss; // convert variable
    double total_Income = 0, total_Expenss = 0; // total
    double Net_Sale = 0;

    DateTimeType datetime; // object of the DateTimeType class    
    productType Income[10000], Expenss[10000]; // array object of the productType class
    AccountingType account; // object of the AccountingType class

    do { 
        std::cout << "You have " << try_number << " try number : " << std::endl;

        std::cout << "Enter the User ID : ";
        std::cin >> user_id;


        std::cout << "Enter the UserPass : ";
        std::cin >> user_pass;

        try_number--;
        std::cout << std::endl;

        if (cheack_id_pass(user_id, user_pass) == true) {
            result = 1;
            break;

        } else if (try_number <= 0) {
            std::cout << "Sorry You can not LogIn !! " << std::endl;
            result = 0;
            break;
        } 

    } while (cheack_id_pass(user_id, user_pass) == false);

    if (result == 1) {

        do {
            std::cout << "Enter the day: ";
            std::cin >> day;
            datetime.set_Day(day);
        } while (!datetime.IsDayValied());
        std::cout << std::endl;

        do {
            std::cout << "Enter the month : ";
            std::cin >> month;
            datetime.set_Month(month);
        } while (!datetime.IsMonthValied());
        std::cout << std::endl;

        do {
            std::cout << "Enter the year : ";
            std::cin >> year;
            datetime.set_Year(year);
        } while (!datetime.IsYearValied());
        std::cout << std::endl;
        do {
            std::cout << "Enter the hour : ";
            std::cin >> hour;
            datetime.set_Hour(hour);
        } while (!datetime.IsHourValied());
        std::cout << std::endl;

        do {
            std::cout << "Enter the minute : ";
            std::cin >> minute;
            datetime.set_Minute(minute);
        } while (!datetime.IsMinuteValied());
        std::cout << std::endl;

        do {
            std::cout << "Enter the second : ";
            std::cin >> secound;
            datetime.set_Secound(secound);
        } while (!datetime.IsSecoundValied());
        std::cout << std::endl;

        // Set Income Date 
        do {
            std::cout << "Enter the Income Size : ";
            std::cin >> Income_size;
            account.set_IncomeSize(Income, Income_size);
        } while (!account.IsIncomeSizeValied());
        convertIncome = std::stoi(Income_size); //convert string to int


        for (int i = 0; i < convertIncome; i++) {
            std::cout << "Enter details for income product #" << (i + 1) << std::endl;
            std::cin.ignore();
            do { 
                std::cout << "Enter The product #" << i + 1 << " Name : ";
                std::cin.ignore();
                std::getline(std::cin, product_name);
                Income[i].set_productName(product_name);
            } while (!Income[i].IsProductNameValied(product_name));

            do {
                std::cout << "Enter the Discribtion for the product#" << i + 1 << " : ";
                std::cin.ignore();
                std::getline(std::cin, product_discribtion);
                Income[i].set_productDiscribtion(product_discribtion);
            } while (!Income[i].IsProductDiscribtionValied(product_discribtion));

            do { 
                std::cout << "Enter the quantity for the product#" << i + 1 << " : ";
                std::cin >> product_quantity;
                Income[i].set_productQuantity(product_quantity);
            } while (!Income[i].IsProductQuantityValied());

            do {
                std::cout << "Enter the Price of the product# " << i + 1 << " : ";
                std::cin  >> product_price;
                Income[i].set_productPrice(product_price);
            } while (!Income[i].IsProductPriceValied());
            std::cout << std::endl;
            total_Income+= Income[i].Total();
        }


        // Set Expenss Date
        do {
            std::cout << "Enter the Expenss Size : ";
            std::cin >> Expenss_size;
            account.set_ExpenssSize(Expenss, Expenss_size);
        } while (!account.IsExpenssSizeValied());
        convertExpenss = std::stoi(Expenss_size); 


        for (int i = 0; i < convertExpenss; i++) {
            std::cout << "Enter details for Expenss product #" << (i + 1) << std::endl;
            std::cin.ignore();
            do { 
                std::cout << "Enter The product #" << i + 1 << " Name : ";
                std::cin.ignore();
                std::getline(std::cin, product_name);
                Expenss[i].set_productName(product_name);
            } while (!Expenss[i].IsProductNameValied(product_name));

            do {
                std::cout << "Enter the Discribtion for the product#" << i + 1 << " : ";
                std::cin.ignore();
                std::getline(std::cin, product_discribtion);
                Expenss[i].set_productDiscribtion(product_discribtion);
            } while (!Expenss[i].IsProductDiscribtionValied(product_discribtion));

            do { 
                std::cout << "Enter the quantity for the product#" << i + 1 << " : ";
                std::cin >> product_quantity;
                Expenss[i].set_productQuantity(product_quantity);
            } while (!Expenss[i].IsProductQuantityValied());

            do {
                std::cout << "Enter the Price of the product# " << i + 1 << " : ";
                std::cin  >> product_price;
                Expenss[i].set_productPrice(product_price);
            } while (!Expenss[i].IsProductPriceValied());
            std::cout << std::endl;
            total_Expenss+= Expenss[i].Total();
        }
        Net_Sale = total_Income - total_Expenss;



    }

    return 0;
}

bool cheack_id_pass (std::string id, std::string password) {
    std::string SystemID = "202110142";
    std::string SystemPass = "@b3d@1r@h8*@n";

    return (SystemID == id) && (SystemPass == password);
}

void displayScreen() {

    std::cout << "Enter Your choice : " << std::endl;
    std::cout << "1- for show Total Sale " << std::endl;
    std::cout << "2- for show Net Income "  << std::endl;
    std::cout << "3- for show static screen " << std::endl;
    std::cout << "4- for show rating option " << std::endl;
    std::cout << "5- for Exit " << std::endl;
}

std::string convertToText(int number) {
    if (number == 0) {
        return "zero";
    }

    const char* words1to9[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char* words10to19[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char* words20to90[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    std::vector<std::string> parts;

    int thousands = number / 1000;
    if (thousands > 0) {
        parts.push_back(convertToText(thousands) + " thousand");
        number %= 1000;
    }

    int hundreds = number / 100;
    if (hundreds > 0) {
        parts.push_back(std::string(words1to9[hundreds]) + " hundred");
        number %= 100;
    }

    if (number >= 10 && number <= 19) {
        parts.push_back(words10to19[number - 10]);
    } else {
        int tens = number / 10;
        int ones = number % 10;
        if (tens > 0) {
            parts.push_back(words20to90[tens]);
        }
        if (ones > 0) {
            parts.push_back(words1to9[ones]);
        }
    }

    // Combine the parts into a single string
    std::string result;
    for (const std::string& part : parts) {
        result += part + " ";
    }

    // Remove trailing space
    result.pop_back();

    return result;
}

