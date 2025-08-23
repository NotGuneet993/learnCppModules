#include <iostream>
#include "add.h"

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

    namespace Goo
    {
        void deep()
        {
            std::cout << "This is inside Foo-->Goo\n";
        }
    }
}

int main() {
    std::string s = "Hi";

    ::print(s);
    Foo::print(s);
    Foo::Goo::deep();

    std::cout << BasicMath::add(5, 10) << "\n"; 

    return 0;
}