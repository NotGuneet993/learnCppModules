#include <iostream>

int main() {
    // running this keeps the junk value that was at what ever memory location it assigned to x.
    [[maybe_unused]]
    int x;

    std::cout << x << "\n";

    return 0;
    }
