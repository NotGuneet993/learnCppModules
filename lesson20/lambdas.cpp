#include <iostream>
#include <array>
#include <algorithm>

/*
Lambda function syntax 
[ capture clause ] ( parameters ) -> returnType 
{
    function body
}
*/

int main() {

    std::array<int, 3> arr {2, 4, 6};

    auto isEven {
        [] (int i) {
            return (i % 2) == 0;
        }
    };

    std::cout << std::boolalpha << std::all_of(arr.begin(), arr.end(), isEven) << '\n';

    int ammo {10};
    auto shoot {
        [&ammo] () {            // capture clause makes a copy of the item being passed in 
            --ammo;
            std::cout << "Pew! " << ammo << " shots left.\n";
        }
    };

    shoot();
    shoot();
    shoot();

    return 0;
}