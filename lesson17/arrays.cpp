#include <iostream>
#include <array>
#include <vector>
#include <functional>

int main() {
    std::array<int, 5> arr{1, 2, 3, 4, 5};

    // array sizes are always size_t
    size_t arrSize = arr.size();
    
    std::cout << std::get<4>(arr) << " is a position 4 in the array\n";
    std::cout << "The array has " << std::size(arr) << " elements.\n";

    // There cannot be an array of references 
    int x {1}, y {2};
    std::array arrInts{x, y};           // this is ok. The compiler will figure it out.
    std::vector vecIntPtr {&x, &y};     // compile automatically figures out its a ptr vector

    std::cout << "Int arr: ";
    for (auto i : arrInts) std::cout << i << " ";
    std::cout << "\n";

    std::cout << "Ptr vector: ";
    for (auto i : vecIntPtr) std::cout << *i << " ";
    std::cout << "\n";

    int z {3};
    // std::reference_wrapper<T> converts the types to references.
    std::array<std::reference_wrapper<int>, 3> arrRefs {x, y, z};

    // use .get() to change the object
    arrRefs[1].get() = 100;
    std::cout << "changed item: " << arrRefs[1] << "\n";
    std::cout << "'y' is : " << y << "\n"; 

    // you can init an array like this;
    std::array<int, 5> emptyArr;
    for (auto &x : emptyArr) x = 0;

    // does this work? yes
    std::array<int, 3> test {1, 2, 3};
    for (auto x : test) std::cout << x << " ";
    test = {0, 0, 0};                               // you can add less that the allocated items # but you cannot add more. 
    for (auto x : test) std::cout << x << " ";

    
    // c-style arrays 
    int arrC[] {1, 2, 3};        // this automtically figures out the size. I could do name[size]; 
    int arrC2d[5][5];              // this makes a 2d arr. the layout is [rows][columns]

    // 2d arrays are like vectors 
    std::array<std::array<int, 4>, 2> Arr2d {};     // 2 rows and 4 cols of all 0s 

    return 0;
}
