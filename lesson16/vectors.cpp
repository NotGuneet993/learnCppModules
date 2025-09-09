#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 {};                         // if you don't populate initally you need to specify a type
    std::vector v2 {"Apple", "Pear", "Banana"};     // The compiler will figure it out on its own       

    std::vector<int> v3 (10);                       // this makes a vector of size 10
    std::cout << "v3 has a space of " << v3.size() << "\n";

    std::vector<int> v4 ({10});                     // this is a vector of size 1 with 10 as the value

    return 0;
}