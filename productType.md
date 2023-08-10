---
# productType 
__productType discribtion :__

# The class Include : 
1. **product Name**  
setter and getter for the product name as like this   
* void set_productName(std::string );  
// This function we use to set the product name its take one parameter
   to set the product name the name must be string  

* std::string get_productName() const;  
// This function we use to getter the product name and return it as 
   string its constant no modefay for the data 
 
2. **product Discribtion**  
setter and getter for the product discribtion as like this 
* void set_productDiscribtion(std::string);  
// This function we use to set the product name its take one parameter  to set the poroduct discribtion the its must be as string you have to use to enter the discribtion cin.getline  
* std::string get_productDiscribtion() const;  
// This function we use to get the product discribtion data its constant data you can not modefay it 

3. **product Quantity**  
setter and getter for the product Quantity as like this 
* void set_productQuantity(int);  
// This function we use to set the prodyct quantity of the product its take one parameter to set the product quantity we must here use:  
Exception Handling : so the value can not be less than 1 
and the value must be numircal number
* int get_productQuantity() const;  
we use the getter function to return the productqyuantity value 
its also constant value so no modefay for the data 

4. **product Price**  
setter abd getter for the product price as like :  
* void set_productPrice(float);  
// this function we use to set the product price its take one parameter to set the value its float so maybe it be fraction  
Eception Handling : its can not less than 0 and the value must be numircal number .   
* float get_productPrice() const;  
//we use this getter function to return price value its can not 
bemodefay because its constant no modefay for the data

5. **Constructer**  
the constructer are two type : 
* deafult constructer : productType();  
// we use this for set  
productName = " ";  
productDiscibtion = " ";  
productQuantity = 1;  
productPrice = 1;

* parameter constructer :  
productType(std::string, std::string, int, float);  
// we use for set  
productName = set_productName(std::string);  
productDiscibtion = set_proudctDiscribtion(std::string);  
productQuantity =  set_productQuantity(int);  
productPrice = productPrice(float);









    
    






