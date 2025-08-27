// adding this macro removes asserts when compiling. Some IDEs automatically add it when compiling. 
// #define NDEBUG

#include <iostream>
#include <cassert>      // assert is a part of this library. 
#include <cmath>

double calculateSqft(double a, double b) {
    // if assert's condition is false it will fail and throw a stack trace
    // strings always equate to true
    assert(a > 0 && b > 0 && "A variable cannot be 0 or negative");

    return sqrt((a * a) + (b * b));
}

int main() {

    double l = -5.6, w = 7.2;
    std::cout << "The squarefeet is: " << calculateSqft(l, w) << "\n";
    return 0;
}