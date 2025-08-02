#include <iostream>

int main() {

    // different ways to initalize variables

    // declare and initlizing via copy-assignment
    int x;
    x = 5;

    // initilizing via intiallizer (still uses copy-intialized)
    int y = 10;

    // this direct initialization --> it allows narrow conversions like double to int
    // this is how static_cast<type> is used
    [[maybe_unused]]
    int a(100);

    // Uniform Initialization / Brace Initialization --> a modern way with out copying 
    // this was introduced in c++ 11 and is safer
    // this does not allow any conversions
    int z { 15 };
    
    // empty --> there is no risk of a garbage value this way  
    // this is called value-initialization
    int b {};

    std::cout << x << y << z << std::endl;
    std::cout << b << std::endl;

    // integer not being used
    // get rid of the error with a compiler flag
    [[maybe_unused]]
    int c { 100 };


    return 0;
}
    