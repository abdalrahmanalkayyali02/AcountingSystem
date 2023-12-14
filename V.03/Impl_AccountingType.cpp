#include "Interface_AccountingType.h"
#include <iostream>
#include <string>
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
        } else if (income_size < 5 )  {
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
    return (IncomeSize >= 5 && IncomeSize < 10000);
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

void AccountingType::LOW_INCOME(productType product[]) {
    product[IncomeSize];
     double minPrice = product[0].get_productPrice();
    int minIndex = 0;

    for (int i = 1; i < IncomeSize; i++) {
        if (product[i].get_productPrice() < minPrice) {
            minPrice = product[i].get_productPrice();
            minIndex = i;
        }
    }

    // Print the product with the minimum price
    std::cout << "Product Income with the minimum price:\n";
    std::cout << "Product Name:  " << product[minIndex].get_productName() << "\n";
    std::cout << "Product Price: " << product[minIndex].get_productPrice() << "\n";
}

void AccountingType::MAX_INCOME(productType product[]) {
    product[IncomeSize];
    double maxPrice = product[0].get_productPrice();
    int maxIndex = 0;

    for (int i = 1; i <IncomeSize; i++) {
        if (product[i].get_productPrice() > maxPrice) {
            maxPrice = product[i].get_productPrice();
            maxIndex = i;
        }
    } 

    // Print the product with the max price
    std::cout << "product Income with the max price : \n";
    std::cout << "Product Name  : " << product[maxIndex].get_productName()  << "\n";
    std::cout << "Product Price : " << product[maxIndex].get_productPrice() << "\n";
}

void AccountingType::MAX_EXPENSS(productType product[]) {
    product[ExpenssSize];
    double maxPrice = product[0].get_productPrice();
    int maxIndex = 0;

    for (int i = 1; i < ExpenssSize; i++) {
        if (product[i].get_productPrice() > maxPrice) {
            maxPrice = product[i].get_productPrice();
            maxIndex = i;
        }
    }

    std::cout << "product Expenss with the max price : \n";
    std::cout << "Product Name  : " << product[maxIndex].get_productName()  << "\n";
    std::cout << "Product Price : " << product[maxIndex].get_productPrice() << "\n";
}

void AccountingType::LOW_EXPENSS(productType product[]) {
    product[ExpenssSize];
    double minPrice = product[0].get_productPrice();
    int minIndex = 0;

    for (int i = 1; i< ExpenssSize; i++) {
        if(product[i].get_productPrice() < minPrice) {
            minPrice =product[i].get_productPrice();
            minIndex = i;
        }
    }


    //Print the product with the minimum price
    std::cout << "Product Expenss with the minimum price:\n";
    std::cout << "Product Name:  " << product[minIndex].get_productName() << "\n";
    std::cout << "Product Price: " << product[minIndex].get_productPrice() << "\n";
} 

void AccountingType::Income_Expenss_Equal(productType Income[], productType Expenss[]) {
    Income[IncomeSize];
    Expenss[ExpenssSize];

    for (int i = 0; i < IncomeSize; i++) {
        for (int j = 0; j < ExpenssSize; j++) {
            if (Income[i].get_productPrice() == Expenss[j].get_productPrice()) {
                std::cout << "Income and Expenss price : \n";
                std::cout << "product Income name : " << Income[i].get_productName()  << "\n";
                std::cout << "product Expenss name: " << Expenss[j].get_productName() << "\n";
                std::cout << "product Price equal = " << Income[i].get_productPrice() << "\n"; 
            }

        }
    }
}

