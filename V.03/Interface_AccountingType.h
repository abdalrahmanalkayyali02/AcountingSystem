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
    public: void set_IncomeSize(productType [], const std::string&); 
    public: bool IsIncomeSizeValied() const;
    public: int get_IncomeSize() const;

    // This 3 function for setter,cheack and get shilfs Expenss
    // the shilfs Quantity >= 5    
    public: void set_ExpenssSize(productType [], const std::string&);
    public: bool IsExpenssSizeValied() const;
    public: int get_ExpenssSize() const;

    // this function is used to prin the max product and price value
    public: void MAX_INCOME(productType []);

    // This function is used to prin the max product and price value
    public: void LOW_INCOME(productType []);

    // This function is used to print the max product name and value
    public: void MAX_EXPENSS(productType []);

    //this function is used to print the minumum product and price value
    public: void LOW_EXPENSS(productType []);

    //This function is to cheack if there is two value price same 
    // between Income and Expenss
    public: void Income_Expenss_Equal(productType[], productType[]);
};

#endif
