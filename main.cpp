#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "Interface_DateTimeSettingType.h"
#include "Interface_AccountingType.h"

int main() {

    std::string SystemID, UserID; // set id 
    std::string SystemPass, UserPass; // set password
    std::string day, month, year; // set date
    std::string hour, minute, secound;  // set year

    std::string Income_size, Expenss_size; // for set the income and expenss size
    std::string product_quantity, product_price; // set quantity and price
    std::string product_name, product_discribtion;  // set name, and discibtion

    int convertIncome, convertExpenss; // convert variable
    double total_Income = 0, total_Expenss = 0; // total
    double Net_Sale = 0;
    std::ofstream outFile; // outfile stream

    DateTimeType datetime; // object of the DateTimeType class
    productType Income[10000], Expenss[10000]; // array object of the productType class
    AccountingType account; // object of the AccountingType class

    SystemID = "202110142";
    SystemPass = "@b3d@1r@h8*@n";

    // Checking for the password and ID
    do {
        std::cout << "Enter User Name: ";
        std::cin >> UserID;

        std::cout << "Enter the password: ";
        std::cin >> UserPass;

    } while (!(SystemID == UserID && SystemPass == UserPass));


    do {
        std::cout << "Enter the day: ";
        std::cin >> day;
        datetime.set_Day(day);
    } while (!datetime.IsDayValied());

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
        std::cin >> hour;
        datetime.set_Hour(hour);
    } while (!datetime.IsHourValied());

    do {
        std::cout << "Enter the minute : ";
        std::cin >> minute;
        datetime.set_Minute(minute);
    } while (!datetime.IsMinuteValied());

    do {
        std::cout << "Enter the second : ";
        std::cin >> secound;
        datetime.set_Secound(secound);
    } while (!datetime.IsSecoundValied());

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

    std::cout << std::endl;
    std::cout << "Explanatory Screen of Sales and Expenses (Before Tax): \n";
    datetime.print();
    std::cout << "Total Income  = " << total_Income  << std::endl;
    std::cout << "Total Expenses = " << total_Expenss << std::endl;
    std::cout << "Net Sale      = " << Net_Sale      << std::endl;

    std::cout << std::endl;
    std::cout << "Explanatory Screen of Sales and Expenses (After Tax, 16%): \n";
    datetime.print();
    std::cout << "Total Income  = " << total_Income  << std::endl;
    std::cout << "Total Expenses = " << total_Expenss << std::endl;
    std::cout << "Net Sale      = " << Net_Sale - (Net_Sale * 0.16) << std::endl;
        

        if((total_Income < total_Expenss) && (total_Income > 1000)) {
            std::cout << "Warning: There is a problem with it and requires management intervention\n";
        } else if (total_Income < 1000) {
            std::cout <<  "Warning: The financial situation is critical that requires planning to solve the problem\n";
            
            std::cout << "Explanatory Screen of Sales and Expenses for Critical Situation: \n";
            datetime.print();
            std::cout << "The details for Income products: \n";

            std::cout << std::setw(10) << std::left << "Name" <<  std::setw(10) << std::left << " Discribtion" << "\t\t"
                      << std::setw(10) << std::left << "Quantity" << "\t" <<  std::setw(10) << std::left << "Price " 
                      << "\t" << std::setw(10) << std::left << "Total" << std::endl;
            
            for (int i = 0; i < convertIncome; i++) { 
                std::cout << Income[i].get_productName() << "\t\t" << Income[i].get_productDiscribtion() << "\t\t"
                          << "   " << Income[i].get_productQuantity() << "\t\t  " << Income[i].get_productPrice() << "\t\t  "
                          << Income[i].Total() << std::endl;
            }


        } else if (total_Income >= 10000) { 
            std::cout << "Thanks for the excellent sale.\n";
        }  


         std::cout << std::setw(10) << std::left << "Name" <<  std::setw(10) << std::left << " Discribtion" << "\t\t"
                   << std::setw(10) << std::left << "Quantity" << "\t" <<  std::setw(10) << std::left << "Price " 
                   << "\t" << std::setw(10) << std::left << "Total" << std::endl;
            
        for (int i = 0; i < convertExpenss; i++) {
            std::cout << Expenss[i].get_productName() << "\t\t" << Expenss[i].get_productDiscribtion() << "\t\t"
                << "   " << Expenss[i].get_productQuantity() << "\t\t  " << Expenss[i].get_productPrice() << "\t\t  "
                << Expenss[i].Total() << std::endl;

    return 0;
}
