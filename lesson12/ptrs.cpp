#include <iostream>

int main() {
    int num {5};

    // & is the "address of" operator
    std::cout << num << " lies at " << &num << "\n";

    // * is the deference operator. It grabs the obj at the address. 
    int* pNum {&num};
    std::cout << "The pointer is pointing to " << pNum << " and the value is " << *pNum << "\n";

    return 0;
}