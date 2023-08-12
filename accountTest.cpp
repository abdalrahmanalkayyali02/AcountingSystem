#include "Interface_AccountingType.h"
#include <iostream>

int main() {
    AccountingType account;
    std::string income_size;
    std::string income_quantity;

    std::cout << "Enter income size : ";
    std::cin >>income_size;
    int convert;
    //convert = std::stoi(income_size);

    productType products[10000];
    account.set_IncomeSize(products,income_size);
    std::cout << sizeof(products);
    convert = std::stoi(income_size);
    for(int i = 0; i < convert ; i++) {
        std::cout << "Enter the quantity : " ;
        std::cin >> income_quantity;
        products[i].set_productQuantity(income_quantity);
    }

    std::cout << account.get_IncomeQuantity(products) << std::endl;

    return 0;
}
