#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b)? a : b;
}

template <typename T, typename U>
auto max(T a, U b) {                // you can use auto in place of T & U in c++20 > 
    return (a > b)? a : b;
}


int main() {

    std::cout << max(5, 7) << "\n";
    std::cout << max(7.1, 7) << "\n";

    return 0;
}
