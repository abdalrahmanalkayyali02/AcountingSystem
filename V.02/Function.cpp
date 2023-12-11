#include <iostream>
#include <vector>
#include "Function.h"

bool cheack_id_pass (std::string id, std::string password) {
    std::string SystemID = "202110142";
    std::string SystemPass = "@b3d@1r@h8*@n";

    return (SystemID == id) && (SystemPass == password);
}

void displayScreen() {

    std::cout << "Enter Your choice : " << std::endl;
    std::cout << "1- for show Total Sale " << std::endl;
    std::cout << "2- for show Net Income "  << std::endl;
    std::cout << "3- for show static screen " << std::endl;
    std::cout << "4- for show rating option " << std::endl;
    std::cout << "5- for Exit " << std::endl;
}

std::string convertToText(int number) {
    if (number == 0) {
        return "zero";
    }

    const char* words1to9[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char* words10to19[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char* words20to90[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    std::vector<std::string> parts;

    int thousands = number / 1000;
    if (thousands > 0) {
        parts.push_back(convertToText(thousands) + " thousand");
        number %= 1000;
    }

    int hundreds = number / 100;
    if (hundreds > 0) {
        parts.push_back(std::string(words1to9[hundreds]) + " hundred");
        number %= 100;
    }

    if (number >= 10 && number <= 19) {
        parts.push_back(words10to19[number - 10]);
    } else {
        int tens = number / 10;
        int ones = number % 10;
        if (tens > 0) {
            parts.push_back(words20to90[tens]);
        }
        if (ones > 0) {
            parts.push_back(words1to9[ones]);
        }
    }

    // Combine the parts into a single string
    std::string result;
    for (const std::string& part : parts) {
        result += part + " ";
    }

    // Remove trailing space
    result.pop_back();

    return result;
}

void displayStatic() {
  std::cout << "1- Hight Income " << std::endl;
  std::cout << "2- Minimum Income " << std::endl;
  std::cout << "3- Hight Expenss " << std::endl;
  std::cout << "4- Minimum Expenss " << std::endl;
} 

