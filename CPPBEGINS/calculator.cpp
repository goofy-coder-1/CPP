#include <iostream>
#include <cstdio>

int main(){
    int number_first;
    char choice;
    int number_second;
    double result;

    std::cout << "Enter first Number: ";
    std::cin >> number_first;

    std::cout << "Operation(+ - / *): ";
    std::cin >> choice;

    std::cout << "Enter second number: ";
    std::cin >> number_second;

    switch (choice)
    {
    case '+':
        result = number_first + number_second;
        std::cout << "The sum of given two number is " << result; 
        break;
    case '-':
        result = number_first - number_second;
        std::cout << "The difference between two number is: "<<result;
        break;
    case '*':
        result = number_first * number_second;
        std::cout << "The product of given two number is: "<<result;
        break;
    case '/':
        if (number_second == 0)
        {
            std::cout << "Denominator can't be zero";
        }
        else
        {
            result = (double)number_first/number_second;
            std::cout << "Number first divided by number second: "<< result;
        }
        break;
    default:
        std::cout << "Invalid operator!";
        break;
    }
    std::cout << "\n";

    return 0;
}