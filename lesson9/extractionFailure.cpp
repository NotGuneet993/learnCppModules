#include <iostream>

bool extractionFailure() {
    return !std::cin.eof() && std::cin.peek() != '\n';
}

int main() {
    int a {};

    std::cout << "enter a number: ";
    std::cin >> a;

    if (extractionFailure()) {
        std::cout << "There was an issue with the input.\n";
    } else {
        std::cout << "You typed in the number: " << a << "\n";
    }

    return 0;
}
