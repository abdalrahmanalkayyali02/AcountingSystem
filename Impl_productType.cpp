#include <iostream>
#include <stdexcept>
#include <sstream>
#include "Interface_productType.h"

void productType::set_productName(const std::string& product_name) {
    try { 
        for (char c : product_name) {
            if (!isalpha(c)) { // isalpha() build in function in c++ using to cheack if is alpha or not 
                throw"product Name must be as text\n"; 
            }  else {
                productName = product_name;
            } 
        }

    } catch (const char *e) {
        std::cout << e;
    } catch(...) {
        std::cout << "Invalied value !";
    }
}

bool productType::IsProductNameValied(const std::string& input) {
    for (char c : input) { 
        if (!std::isalpha(c)) {
            return false;
        }
    }
    return true;
}

std::string productType::get_productName() const {
    return productName;
} 

void productType::set_productDiscribtion(std::string product_discribtion) {
    try { 
        for (char c : product_discribtion) {
            if (!isalpha(c)) { // isalpha() build in function in c++ using to cheack if is alpha or not 
                throw"product Discribtion must be as text\n"; 
            }  else {
                productDiscribtion = product_discribtion;
            } 
        }

    } catch (const char *e) {
        std::cout << e;
    } catch(...) {
        std::cout << "Invalied value !";
    }
}

bool productType::IsProductDiscribtionValied(const std::string& input) {
    for (char c : input) { 
        if (!std::isalpha(c)) {
            return false;
        }
    }
    return true;
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
    return (productQuantity > 1);
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

/*void print(std::ostream) const {
// revision file stream befor 
} */ 

/*productType::productType (const std::string& product_name, const std::string& product_discribtion, 
                          const std::string& Product_Quantity, const std::string& Product_Price) {

    set_productName(product_name);
    set_productDiscribtion(product_discribtion);
    set_productQuantity(Product_Quantity); //quantity
    set_productPrice(Product_Price); // price
}  */   

/*productType::productType() {
  set_productName("");
  set_productDiscribtion("");
  set_productQuantity("");
  set_productPrice("");
  } */ 



