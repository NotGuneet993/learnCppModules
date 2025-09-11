#include <iostream>
#include <functional>

int func() {
    return 1;
}

int sum(int a, int b) { return a + b; }

int main() {
    // reinterpret_cast<>() re-interprites the bytes
    std::cout << reinterpret_cast<void*>(func) << "\n";

    // function pointers --> they need the * in the ()
    // these do not support default arguments
    int (*funcPtr)();           // returnType (*PtrName)(inputs)

    int (*pFunc)() {&func};
    int (*sumPtr)(int, int) {&sum};

    std::cout << "The sum function is being called via explicit dereference: " << (*sumPtr)(1, 2) << "\n"; 
    std::cout << "The sum function is being called via implicit dereference: " << sumPtr(1, 5) << "\n";

    /*
    function pointers are useful for passing functinos as callback functions into other functions.
    */

    // this is a cleaner replacement
    std::function<int (int, int)> sumPtr2 {&sum};
    std::cout << "1 + 1 is " << sumPtr2(1, 1) << "\n";

    // auto can also be used 
    auto sumPtr3 {&sum};

    return 0;
}