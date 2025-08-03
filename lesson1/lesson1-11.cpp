#include <iostream>

int main()
{
    // example 
    // Enter an integer: 4
    // Double that number is: 8

    int inputVariable {};
    std::cout << "Enter an integer: ";
    std::cin >> inputVariable;

    std::cout << "Double that number is: " << inputVariable * 2 << "\n";

    return 0;
}
