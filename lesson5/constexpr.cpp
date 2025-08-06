#include <iostream>

int main()
{
    // creating variables that will evaluate during compile time 
    // this makes the code run much quicker, but compiles slower.

    // using const might or might not evaluate at compile time as opposed to run time
    const int test1 { 1 };          // this might evaluate at compile time.
    const double test2 { 2.5 };     // this will not evaluate at compile time.

    // constexpr forces eval at compile time
    constexpr int test3 { 3 }; 
    constexpr double test4 { 4.1 }; 
    constexpr double test5 { 4.9 }; 

    // since both are evaluated at compile time, the sum will also evaluate at compile time
    std::cout << "Doubles' sum: " << test4 + test5 << "\n";

    return 0;
}
