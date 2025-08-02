#include <iostream> // for std::cout

int main()
{
    std::cout << 5;       // print the literal number `5`
    std::cout << -6.7;    // print the literal number `-6.7`
    std::cout << 'H';     // print the literal character `H`
    std::cout << "Hello"; // print the literal text `Hello`

    // std::cout << '';   // will cause a compiler error

    int x;                // this is a defined variable. The object is created when the var is stored in memory.

    return 0;
}
