#include <iostream>

int main() {

    int large { 1000000000 };
    short small {}; 

    
    small = large;
    std::cout << "This overflow would throw a warning: " << small << "\n";

    small = static_cast<short>(large);
    std::cout << "Static cast prevents the warning: " << small << "\n";

    return 0;
}