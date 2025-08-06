#include <string>
#include <string_view>
#include <iostream>

void printString(std::string_view str)
// this is cheaper than copying the whole string
{
    std::cout << str << "\n";
}

int main()
{
    std::string name {};
    name = "Luna";

    std::cout << "The name in storage is: " << name << "\n";

    name = "Guneet";
    std::cout << "The name in storage is now: " << name << "\n\n";

    // std::ws removes the white space
    std::cout << "Enter a full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "The name you entered is: " << name << "\n";

    // the type of a string's size is size_t. It needs to be cast to an integer
    int stringSize = static_cast<int>(name.length());
    std::cout << name << " is " << stringSize << " characters long.\n";

    // std::string is slow and expensive to copy by value
    // a solution to it is string view
    // str view is read only
    std::string_view s {"Test string"};
    printString(s);
    
    return 0;
}
