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
   

};

#endif
