#include <iostream>
#include <stdexcept>
#include <sstream>
#include <ctype.h>
#include "Interface_productType.h"

void productType::set_productName(const std::string& product_name) {
    try {
        for (char c : product_name) {
            if (!isalpha(c) && !isspace(c)) { // isalpha() is a built-in function in C++ to check if a character is an alphabet letter
                throw "Error: Product name must only contain alphabetic letters and spaces\n";
            }
        }

        productName = product_name; // Moved this line outside the loop

    } catch (const char *e) {
        std::cout << e;
    } catch (...) {
        std::cout << "Invalid value!";
    }
}

bool productType::IsProductNameValied(const std::string& product_name) {
    for (char c : product_name) {
        if (!isalpha(c) && !isspace(c)) { // isalpha() is a built-in function in C++ to check if a character is an alphabet letter
            return false; // Return false if the product name contains invalid characters
        }
    }
    return true; // Return true if the product name is valid
}

std::string productType::get_productName() const {
    return productName;
} 

void productType::set_productDiscribtion(std::string product_discribtion) {
    try {
        for (char c : product_discribtion) {
            if (!isalpha(c) && !isspace(c)) { // isalpha() is a built-in function in C++ to check if a character is an alphabet letter
                throw "Error: Product name must only contain alphabetic letters and spaces\n";
            }
        }

        productDiscribtion = product_discribtion; // Moved this line outside the loop

    } catch (const char *e) {
        std::cout << e;
    } catch (...) {
        std::cout << "Invalid value!";
    }
}


bool productType::IsProductDiscribtionValied(const std::string& input) {
    for (char c : input) {
        if (!isalpha(c) && !isspace(c)) { // isalpha() is a built-in function in C++ to check if a character is an alphabet letter
            return false; // Return false if the product name contains invalid characters
        }
    }
    return true; // Return true if the product name is valid
}

std::string productType::get_productDiscribtion() const {
    return productDiscribtion;
}

void productType::set_productQuantity(const std::string& input) {
    try {
        int set_quantity;
        std::istringstream iss(input); // This object from the class isstringstream liblary convert
                                       // the string input to array of char and compare it between 
                                       // string number and text
        if (!(iss >> set_quantity)) {
            throw "Error : The Quantity can not be as text it must be as numircal value \n";
        } else if (set_quantity < 1 )  {
            throw "Error : The Quantity can not be less than 1 \n";
        } else {
            productQuantity = set_quantity;
        }
    }
    catch (const char *e) {
        std::cout << e;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    }
}

bool productType::IsProductQuantityValied() const {
    return (productQuantity >= 1);
}

int productType::get_productQuantity() const {
    return productQuantity;
} 

void productType::set_productPrice(const std::string& input) {
    try { 
        float set_price;
        std::istringstream iss(input); // This object from the class isstringstream liblary convert
                                       // the string input to array of char and compare it between 
                                       // string number and text
        if(!(iss >> set_price)) {
            throw "Error : The price can not be as text it must be as numircal value \n";
        } else if (set_price <= 0 ) {
            throw "Error : The price can not ba 0 or less it must be 1 or hight \n";
        } else {
            productPrice = set_price;
        } 
    } 
    catch (const char *e) {
        std::cout << e;
    } catch (...) {
        std::cout << "Invalid input. Enter a correct value: ";
    }
}

bool productType::IsProductPriceValied() const {
    return (productPrice > 0);
}

float productType::get_productPrice() const {
    return productPrice;
}

float productType::Total() const {
    return productPrice * productQuantity;
}
void productType::print() const { 
    
    if (productQuantity < 10 ) {
        std::cout << "0" << productQuantity    << std::endl;
    } else {
        std::cout <<        productQuantity    << std::endl;
    }
    
    if (productPrice < 10) {
        std::cout << "0" << productPrice       << std::endl;
    } else {
        std::cout <<        productPrice       << std::endl;
    } 
    
    std::cout << "product Name   \t\t product Discribtion \t\t\t product Quantity \t\t product Price " << std::endl;     
    std::cout << productName << "\t\t" << productDiscribtion << "\t\t\t " << productQuantity << "\t\t" << productPrice << std::endl;  
}

productType::productType() {
   /set_productName(" ");
    set_productDiscribtion(" ");
    set_productQuantity("0");
    set_productPrice("0"); 
} 



