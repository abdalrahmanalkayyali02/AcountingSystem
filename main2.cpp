#include <iostream>
#include <vector>
#include "Interface_productType.h" // Make sure to include the correct header file for productType

int main() {
    std::vector<productType> incomeProducts;
    std::vector<productType> expenseProducts;

    // Gather income data
    int incomeSize;
    do {
        std::cout << "Enter the number of income products: ";
        std::cin >> incomeSize;
    } while (incomeSize <= 0);

    for (int i = 0; i < incomeSize; ++i) {
        productType product;

        std::string name, description;
        int quantity;
        float price;

        std::cout << "Enter details for income product #" << (i + 1) << std::endl;
        std::cin.ignore(); // Clear the newline character from previous input
        std::cout << "Product Name: ";
        std::getline(std::cin, name);
        product.set_productName(name);

        std::cout << "Product Description: ";
        std::getline(std::cin, description);
        product.set_productDiscribtion(description);

        std::cout << "Product Quantity: ";
        std::cin >> quantity;
        product.set_productQuantity(std::to_string(quantity));

        std::cout << "Product Price: ";
        std::cin >> price;
        product.set_productPrice(std::to_string(price));

        incomeProducts.push_back(product);
    }

    // Gather expense data
    int expenseSize;
    do {
        std::cout << "Enter the number of expense products: ";
        std::cin >> expenseSize;
    } while (expenseSize <= 0);

    for (int i = 0; i < expenseSize; ++i) {
        productType product;

        std::string name, description;
        int quantity;
        float price;

        std::cout << "Enter details for expense product #" << (i + 1) << std::endl;
        std::cin.ignore(); // Clear the newline character from previous input
        std::cout << "Product Name: ";
        std::getline(std::cin, name);
        product.set_productName(name);

        std::cout << "Product Description: ";
        std::getline(std::cin, description);
        product.set_productDiscribtion(description);

        std::cout << "Product Quantity: ";
        std::cin >> quantity;
        product.set_productQuantity(std::to_string(quantity));

        std::cout << "Product Price: ";
        std::cin >> price;
        product.set_productPrice(std::to_string(price));

        expenseProducts.push_back(product);
    }

    // Calculate total income and expenses
    float totalIncome = 0;
    for (const productType& product : incomeProducts) {
        totalIncome += product.get_productPrice() * product.get_productQuantity();
    }

    float totalExpenses = 0;
    for (const productType& product : expenseProducts) {
        totalExpenses += product.get_productPrice() * product.get_productQuantity();
    }

    // Display the results
    std::cout << "Total Income: " << totalIncome << std::endl;
    std::cout << "Total Expenses: " << totalExpenses << std::endl;
    std::cout << "Net Profit: " << (totalIncome - totalExpenses) << std::endl;

    return 0;
}

