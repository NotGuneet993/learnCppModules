#include <iostream>

struct t {
    int a {};
    char b {};
    long c {};
};

int main() {
    /*
    The struct rounds the obj to the nearest multiple of 4 for each obj type
    char -> goes to 4 from 2
    int -> already 4
    long -> is 8, a multiple of 4

    4 + 4 + 8 = 16
    */
   
    std::cout << "Size of char: " << sizeof(char) << "\n"; 
    std::cout << "Size of int: " << sizeof(int) << "\n"; 
    std::cout << "Size of long: " << sizeof(long) << "\n"; 

    t testOjb { 1, 'a', 1};
    std::cout << "Size of struct: " << sizeof(testOjb) << "\n"; 

    return 0;
}
