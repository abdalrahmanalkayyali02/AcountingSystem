#include <iostream>
#include <sstream>
//#include "Interface_productType.h"
#include "Interface_DateTimeSettingType.h"
#include "Interface_AccountingType.h"

int main() {
    int userid, userSystem; // id 
    std::string userpass, PassSystem;  // password

    std::string day, month, year; // date
    std::string hour, minute, secound; // time

    PassSystem = "@b3d@1r@h8*@n";
    userid = 202110142;

    // checking for the password and id
    do {
        std::cout << "Enter User Name : ";
        std::cin >> userSystem;

        std::cout << "Enter the password : ";
        std::cin >> userpass;

    } while (!(userSystem == userid && PassSystem == userpass));

    DateTimeType datetime;
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

    productType product[10000];
    productType product2[10000];
    std::string Income_size, Expenss_size, Income_quantity, Expenss_quantity;
    AccountingType account;
    int convert;
    int convert2;
    int sum_income = 0;
    int sum_expenss = 0;

    do {
        std::cout << "Enter the Income Size : ";
        std::cin >> Income_size;
        account.set_IncomeSize(product, Income_size);
    } while (!account.IsIncomeSizeValied());
    convert = std::stoi(Income_size);
    
    // storge the product total quantity in the sum
    for (int i = 0; i < convert; i++) {
        std::cout << "Enter the quantity for the Income " << i + 1 << " : ";
        std::cin >> Income_quantity;
        product[i].set_productQuantity(Income_quantity);
        sum_income+= product[i].get_productQuantity();
    }

    do {
        std::cout << "Enter the Expenss Size : ";
        std::cin >> Expenss_size;
        account.set_ExpenssSize(product2, Expenss_size);
    } while (!account.IsExpenssSizeValied());

    convert2 = std::stoi(Expenss_size);

    //storge the product total quantity in the sum2
    for (int i = 0; i < convert2; i++) {
        std::cout << "Enter the quantity of the Expenss " << i + 1 << " : ";
        std::cin >> Expenss_quantity;
        product2[i].set_productQuantity(Expenss_quantity);
        sum_expenss += product[i].get_productQuantity();
    } 
    
    std::string income_price;
    int sum_priceIncome  = 0;
    int sum_priceExpenss = 0;
    // show the income price for each product
    for (int i = 0 ; i < convert; i++) { 
        std::cout << "Enter the product price : " << i + 1 << " : " ;
        std::cin  >> income_price;
        product[i].set_productPrice(income_price);
        sum_priceIncome += product[i].get_productPrice();
    }

    // show the expenss price for each product
     std::string expenss_price;
    for (int i = 0; i < convert2; i++) {
        std::cout << "Enter the product price : " << i +1 << " : ";
        std::cin >> expenss_price;
        product2[i].set_productPrice(expenss_price);
        sum_priceExpenss += product[i].get_productPrice();
    }
    double total_income = 0;
    double total_expenss = 0;


        




    return 0;
}



