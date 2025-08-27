#include <iostream>
#include <limits>

void fixBuffer() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main() {
    int a, b;

    std::cout << "Enter a letter to break the buffer: ";
    std::cin >> a;

    fixBuffer();

    std::cout << "Enter a number now to test the fixed buffer: ";
    std::cin >> b;

    std::cout << "You entered: " << b << "\n";

    return 0;
}