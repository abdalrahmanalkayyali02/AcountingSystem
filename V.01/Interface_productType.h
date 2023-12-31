#include <string>

class productType {
    private: std::string productName;
    private: std::string productDiscribtion;
    private: float productPrice;
    private: int productQuantity;

             // for set,cheack and get the product name 
    public: void set_productName(const std::string&);
    public: bool IsProductNameValied(const std::string&);
    public: std::string get_productName() const;

            // for set,cheack and get product discribtion
    public: void set_productDiscribtion(std::string);
    public: bool IsProductDiscribtionValied(const std::string&);
    public: std::string get_productDiscribtion() const;

            // for set,cheack and get product Quantity
    public: void set_productQuantity(const std::string& input);
    public: bool IsProductQuantityValied() const;
    public: int get_productQuantity() const;

            // for set,cheack and get product price
    public: void set_productPrice(const std::string& input);
    public: bool IsProductPriceValied() const;
    public: float get_productPrice() const;

            // for print and get the Total = price * quantity 
    public: float Total() const;
    public: void print() const;

            // constructer
    public: productType(); 
};
