#include <iostream>

void print(std::string& str)
{
    std::cout << str << "\n";
}

namespace Foo 
{
    void print(std::string& str)
    {
        std::cout << "This string is from the Foo namespace: " << str << "\n";
    }
}

int main() {
    std::string s = "Hi";

    print(s);
    Foo::print(s);

    return 0;
}