#include <iostream>

// C++ did a numeric promotion. 
// Shorts are sub 32 bits and 32 bits are the most efficient to process on a 32x processor. 
// c++ padded the short to make it work on an int function.
// there are also numeric promotions for floating values (float -> double)
void printInt(int number) {
    std::cout << number << "\n";
}

int main() {

    short srt{2};
    printInt(srt);

    return 0;
}