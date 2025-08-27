#include <iostream>
#include <limits>

void ignoreLine();

int main() {
    int a {}, b {};

    std::cout << "Enter the first number: ";
    std::cin >> a;
    ignoreLine();

    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << a << " + " << b << " is " << a + b << "\n";
    ignoreLine();

    return 0;
}

void ignoreLine() {
    // this deleted everything in the buffer before the next call of cin is acted upon
    // eg, if cin wants an int, but I type "5 * 6", it only grabs 5 then destorys the rest of the buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
