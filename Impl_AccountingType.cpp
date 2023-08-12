#include "Interface_AccountingType.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>

void AccountingType::set_IncomeSize(productType[] , const std::string& input) {
    try {
        int income_size;
        std::istringstream iss(input); //This object from the class isstringstream liblary convert
                                       // the string input to array of char and compare it between 
                                       // string number and text
        if (!(iss >> income_size)) {
            throw "Error : The Income size can not be as text it must be as numircal value \n";
        } else if (income_size < 20 )  {
            throw "Error : The Income size can not be less than 20 \n";
        } else if (income_size > 10000) {
            throw "Error : The Income Size can not be more than 10000\n";
        } else {
            IncomeSize = income_size;
            productType product[IncomeSize];
        }
    }
    catch (const char *e) {
        std::cout << e;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    }
}

bool AccountingType::IsIncomeSizeValied() const {
    return (IncomeSize >= 20 && IncomeSize < 10000);
}

int AccountingType::get_IncomeSize() const {
    return IncomeSize;
}

void AccountingType::set_ExpenssSize( productType[] ,const std::string& input) {
    try {
        int expenss_size;
        std::istringstream iss(input); //This object from the class isstringstream liblary convert
                                       // the string input to array of char and compare it between 
                                       // string number and text
        if (!(iss >> expenss_size)) {
            throw "Error : The Income size can not be as text it must be as numircal value \n";
        } else if (expenss_size < 5 )  {
            throw "Error : The Income size can not be less than 5 \n";
        } else if (expenss_size > 10000) {
            throw "Error : The Income Size can not be more than 10000\n";
        } else {
            ExpenssSize = expenss_size;
            productType product[ExpenssSize];
        }
    }
    catch (const char *e) {
        std::cout << e;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    }
}

bool AccountingType::IsExpenssSizeValied() const {
    return (IncomeSize >= 5 && IncomeSize < 10000);
}

int AccountingType::get_ExpenssSize() const {
    return ExpenssSize;
}

int AccountingType::get_IncomeQuantity(productType[])  {
     int IncomeQuantity = 0; 
     productType product[IncomeSize];

    for (int index = 0; index < IncomeSize; index++) {
        IncomeQuantity += (product[index].get_productQuantity());
    } 
    return IncomeQuantity;
}
