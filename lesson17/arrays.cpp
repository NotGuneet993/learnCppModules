#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr{1, 2, 3, 4, 5};

    // array sizes are always size_t
    size_t arrSize = arr.size();
    
    std::cout << std::get<4>(arr) << " is a position 4 in the array\n";
    std::cout << "The array has " << std::size(arr) << " elements.\n";


    return 0;
}
