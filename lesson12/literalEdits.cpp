#include <iostream>
#include <vector>


void printVector(std::vector<int>& v) {
    std::cout << "Print vector:\n";
    for (auto i : v) std::cout << i << "\n";
    std::cout << "Done!\n";
}

void all0ref(std::vector<int>& v) {
    // the & is a reference to the value so all the items = 0. without & you'd edit the copies
    for (auto& i : v) i = 0;    
}

void all0(std::vector<int>& v) {
    // the & is a reference to the value so all the items = 0. without & you'd edit the copies
    for (auto i : v) i = 0;    
}

int main()
{
    std::vector<int> test {1, 2, 3};
    printVector(test);
    
    std::cout << "\nIterating using copies\n";
    all0(test);
    printVector(test);

    std::cout << "\nIterating using references\n";
    all0ref(test);
    printVector(test);
    
    return 0;
}