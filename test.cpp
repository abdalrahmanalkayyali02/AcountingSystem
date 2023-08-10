#include <iostream>
#include "Interface_productType.h"

int main() {
    std::string quantity;
    std::string price;
    std::string name;
    productType product;

    std::cout << "Enter the quantity of the product : \n";
    std::cin >> quantity;
    product.set_productQuantity(quantity);
    std::cout << product.get_productQuantity() << std::endl; 
   
    std::cout << "Enter the price of the product : \n";
    std::cin >> price;
    product.set_productPrice(price); 

       std::cout << "Enter the product Name : \n";
        std::cin >> name;
        product.set_productName(name);



    std::string user_input;
    std::string user_dis;

    do {
        std::cout << "Enter a product name : ";
        std::cin >> user_input;


        if (product.IsProductNameValied(user_input)) {
            std::cout << "Product name is valid.\n";
        } else {
            std::cout << "Product name is not valid.\n";
        }
    } while ((product.IsProductNameValied(user_input)) == false);

    do {
        std::cout << "Enter a product Discribtion : ";
        std::cin >> user_dis;

    } while ((product.IsProductDiscribtionValied(user_dis)) == false);




    return 0;
}
