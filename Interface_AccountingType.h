#include <iostream>
#include <fstream>
#ifndef productType_H
#define productType_H
#include "Interface_productType.h"

class AccountingType : public productType {
    private: int IncomeSize;
    private: int ExpenssSize;     
    
    // This 3 function for setter,cheack and get shilfs Income
    // the shilfs Quantity >= 20 
    // we must decrlate the array or the productType in AccoutingSystem class 
    // AccountingSyste class is the have multi inhetence form accounting, productm data
   
    // command need to move to porduct section
    public: void set_IncomeSize(productType [], const std::string&); 
    public: bool IsIncomeSizeValied() const;
    public: int get_IncomeSize() const;

    // This 3 function for setter,cheack and get shilfs Expenss
    // the shilfs Quantity >= 5
    // we must decrlate the array or the productType in AccoutingSystem class 
    // AccountingSyste class is the have multi inhetence form accounting, productm data
    
    // commnad need to move to producttype
    public: void set_ExpenssSize(productType [], const std::string&);
    public: bool IsExpenssSizeValied() const;
    public: int get_ExpenssSize() const;
    
    //these 3 function to setterm, cheacker and get shilf Income
    //its customize the length of the shilf from the product 
    public: int get_IncomeQuantity(productType[]);

    //these 3 function to setterm, cheacker and get shilf Expenss
    //its customize the length of the shilf from the product 
    public: int get_ExpenssQuantity() const;
    
    // Income price Value of price is :
    // Income price = (IncomType number * Quantity of product for all income number
    public: double IncomePrice() const; 
   
    // Expenss price value of price is :
    // Expenss price = Expenss number * quantity of product for all expenss number 
    public: double ExpenssPrice() const;
   
    // The total will be calculates as 
    // Total = Income - Expenss
    public: double Total() const;

    // The total after tax will be calulated
    // Ttoal = Total - (Total * 0.16) 
    public: double TotalTax () const;
    
    // print function print data in file as like this instruction :
    // Income   
    // Expenss
    // Income qantity
    // Expenss quantity
    // total - no tax 
    // total - after tax 
    public: void print(std::ofstream) const;

};

#endif
