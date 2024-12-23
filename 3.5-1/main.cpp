#include <iostream>
#include <limits>
#include "math.h"

int main() 
{
    double num1 = 0;
    double num2 = 0;
    int choice = 0;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    while (std::cin.fail()) 
    {
        std::cout << "Invalid input. Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> num1;
    }

    std::cout << "Enter second number: ";
    std::cin >> num2;
    while (std::cin.fail()) 
    {
        std::cout << "Invalid input. Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> num2;
    }

    std::cout << "Choose an operation:\n";
    std::cout << "1. Sum\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Exponentiation\n";
    std::cin >> choice;

    while (std::cin.fail() || choice < 1 || choice > 5) 
    {
        std::cout << "Invalid choice. Please enter a number between 1 and 5: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> choice;
    }

    double result;
    try 
    {
        switch (choice) 
        {
            case 1: result = sum(num1, num2); 
                break;
            case 2: result = subtract(num1, num2); 
                break;
            case 3: result = multiply(num1, num2); 
                break;
            case 4: result = divide(num1, num2); 
                break;
            case 5: result = exponentiation(num1, num2); 
                break;
        }
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error& error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}