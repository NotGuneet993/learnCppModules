#include <iostream>

int main() {
    int a {5};
    int& refA {a};

    std::cout << "real val: " << a << "\n";
    std::cout << "ref val: " << refA << "\n";

    int& ref2 {refA};

    std::cout << "ref2: " << ref2 << "\n";      // this automatically pulls the obj being referenced so ref2 is not int&& (ref to ref).

    const int b {10};
    const int& refB {b};            // a ref to a cosnt obj needs to be const too

    int c {100};
    const int& refC {c};

    //  refC = 1;                   // will produce an error 
    c = 1;                          // this is ok 

    const int& constRef {123};      // this only works because of the const keyword.

    return 0;
}