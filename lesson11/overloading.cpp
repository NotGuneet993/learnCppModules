#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

double add(double a, double b, double c) {
    return a + b + c;
}

void testFunc(int a) {
    std::cout << a << "\n";
}

void testFunc(char) = delete;       // this prevents a char from being passed in.

void clash(unsigned int var) {
    std::cout << "The unsigned int version is called.\n";
}

void clash(float var) {
    std::cout << "The float version is called.\n";
}


int main() {

    // all of these compile because of overloading (polymorphism)
    std::cout << add(5, 1) << "\n";
    std::cout << add(5.5, 1.5) << "\n";
    std::cout << add(1.1, 1.2, 1.3) << "\n";

    // testFunc('a');      // "a" does not work with this 

    // clash(0);        // neither is called since 0 can be a float or unsigned int. 
    unsigned int var {};
    clash(var);
    clash(0u);          // converts the 0 to unsigned.

    return 0;
}
