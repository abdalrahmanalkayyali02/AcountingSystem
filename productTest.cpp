#include <iostream>
#include "Interface_productType.h"

int main() {
    std::string quantity;
    std::string price;
    std::string name;
    productType product;
    /*    int sum = 0;  
          for (int i = 0 ; i < 2 ; i++) {
          std::cout << "Enter the quantity fo the product : ";
          std::cin >> quantity;
          product[i].set_productQuantity(quantity);
          sum += product[i].get_productQuantity();
          }
          std::cout << product[1].get_productQuantity() << std::endl;
          std::cout << product[1].get_productQuantity()  + 1 << std::endl;
          std::cout << sum;  */  

    std::string user_input;
    std::string user_dis;
    std::string user_qu;
    std::string use_pr;
    /*std::string n = "5";
    int num = std::stoi(n);
    for (int i = 0; i < num; i++) {
        do {
            std::cout << "Enter a product " << i + 1 << " name : ";
            std::getline(std::cin,user_input);
            product[i].set_productName(user_input);

        } while ((product[i].IsProductNameValied(user_input)) == false);
     } */
  /*  for (int i = 0; i <5; i++) {
    do {
        std::cout << "Enter a product Discribtion : ";
        std::cin >> user_dis;
        product[i].set_productDiscribtion(user_dis);

    } while ((product.IsProductDiscribtionValied(user_dis)) == false);    */
    
 do {
        std::cout << "Enter the product price: ";
        std::cin >> use_pr;
        std::cin.ignore();  // Clear the newline character from the input buffer
        product.set_productPrice(use_pr);
    } while(!product.IsProductPriceValied());
/*       do {
       std::cout << "Enter the product price : ";
       std::cin >> use_pr;
       product.set_productPrice(use_pr);
       } while (product.IsProductPriceValied() == false);
       std::cout << product.Total() << std::endl; */ 

       product.print();


    return 0;
}
