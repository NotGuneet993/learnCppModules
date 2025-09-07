#include <iostream>
#include <vector>

template<typename T>
struct Pair {
    T first{};
    T second{};
};

int main() {

    Pair<int> intPair {1, 2};
    Pair<float> floatPair {1.5f, 2.5f};

    std::cout << intPair.first << " " << intPair.second << "\n";
    std::cout << floatPair.first << " " << floatPair.second << "\n";

    // following c++ 17 you dont need to add <T> if you are initializing an object
    std::vector hi = {1,2,3,4,5,6,7,8,9,10};
    for (int n : hi) std::cout << n << " ";
    std::cout << "\n";

    return 0;
}