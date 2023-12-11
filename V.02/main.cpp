#include <iostream>
#include <iomanip>
#include "Interface_DateTimeSettingType.h"
#include "Interface_AccountingType.h"
#include "Function.h"

int main() {

    std::string user_id, user_pass;
    int try_number = 3;
    int choice_current = 0., prev_choice = 0, static_choice = 0;
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
            exit(1);
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
            
            do {
                displayScreen();
                std::cin >> choice_current;

                switch (choice_current) {
                    
                    case 1:
                        std::cout << "Total Income = " << Net_Sale << std::endl;
                        break;

                    case 2:
                            if (prev_choice == 1) {
                                Net_Sale = Net_Sale - (Net_Sale * 0.16);
                                std::string textRepresentation = convertToText(Net_Sale);
                                std::cout << "Total Net Sale = " << Net_Sale << std::endl;
                                std::cout << " Total Net Sale in word : " << textRepresentation << std::endl;
                            } else {
                                std::cout << "you have to choice show total sale befor " << std::endl;
                            }
                        break;

                    case 3:
                        displayStatic();
                        std::cin >> static_choice;

                        if (static_choice == 1) {
                            account.MAX_INCOME(Income);
                        } else if (static_choice == 2) {
                            account.LOW_INCOME(Income);
                        } else if (static_choice == 3) {
                            account.MAX_EXPENSS(Income);
                        } else if (static_choice == 4) {
                            account.LOW_EXPENSS(Expenss);
                        } else {
                            std::cout << "Inccorect value !! \n";
                        } 
                        break;

                    case 4:
                        if((total_Income < total_Expenss) && (total_Income > 1000)) {
                            std::cout << "Warning: There is a problem with it and requires management intervention\n";
                        
                        } else if (total_Income < 1000) {
                            std::cout <<  "Warning: The financial situation is critical that requires planning to solve the problem\n";   
                        
                        }  else if (total_Income >= 10000) { 
                            std::cout << "Thanks for the excellent sale.\n";
                        }  
                        break;

                    case 5: 
                        char agree;
                        std::cout << "are you sure you want to exit ? (y/n) ";
                        std::cin >> agree;

                        if (agree == 'y') {
                            std::cout << "Bye " << std::endl;
                            exit(1);
                        } 
                        break;

                        default:
                            std::cout << "Incorrect value choice correct one !!" << std::endl;
                    } 
                    prev_choice = choice_current;
                } while ((prev_choice && choice_current) != -1);
        }
    return 0;
}
