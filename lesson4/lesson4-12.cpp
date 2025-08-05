#include <iostream>
#include <cstdint>

void printDouble(double x)
{
    std::cout << x << "\n";
}

int main()
{
    // implicit conversion
    // there is no risk of data loss so it will work fine.
    int x {4};
    printDouble(4); 

    // explicit conversion 
    double dollarAmount {55.67};
    std::cout << "There are " << static_cast<int>(100 * dollarAmount) % 100 << " pennies." << "\n";

    return 0;
}
