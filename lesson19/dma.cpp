#include <iostream>

int main() {
    // new requests data from the heap
    // this causes a memory leaks since a pointer is returned but it is not being stored. 
    // new int;

    int *num {new int};
    *num = 1;
    std::cout << *num << "\n";

    delete num;
    num = nullptr;              // good practice to do this 


    // 'new' can fail. If new fails, std::nothrow can be used to return a nullptr
    int *num2 { new (std::nothrow) int {5}};
    if (!num2) {
        std::cerr << "Failed to allocate memory.\n";
    }
    
    std::cout << *num2 << " worked.\n";
    delete num2;
    num2 = nullptr;

    // you cannot use std::array<> with a heap and have the size be dynamic. instead you use c arrays 
    size_t size;
    std::cout << "Enter a size: ";
    std::cin >> size;

    int* arrHead = new int[size] {};
    for (int i{}; i < size; ++i) std::cout << arrHead[i] << ' ';

    return 0;
}