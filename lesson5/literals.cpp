#include <iostream>

int main() 
{

    // there are two types of literals 
    // you can use const to make a varialbe read only once it has been initialized
    const int literal { 5 };

    // you need an initializer. This will not work.
    // const int literal2;
    // literal2 = 6;

    // Another type of literal is the object itself 
    // eg, 5 or 'a'

    // You can use suffixes to change a literal's type 
    std::cout << "This is an integer: " << 5 << ".\n";              // no suffix so it is an int
    std::cout << "This is an unsigned long: " << 5uL << ".\n";      // uL -> unsigned long.s

    return 0;
}
