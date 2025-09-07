#include <iostream>

struct test {
    int num1 {};
    int num2 {};

    int produceSum() {
        return num1 + num2;
    }
};


// members of classes are private by default 
class Obj {
    int memberA {};

public:
    int memberB {};
};

int main() {
    test numPair {1, 4};
    std::cout << numPair.produceSum() << '\n';

    Obj object {};
    // std::cout << object.memberA << '\n';     // this will not compile since classes are private by default
    std::cout << object.memberB << '\n';

    return 0;
}