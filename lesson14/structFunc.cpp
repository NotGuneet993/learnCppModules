#include <iostream>

struct test {
    int num1 {};
    int num2 {};

    int produceSum() {
        return num1 + num2;
    }
};

int main() {
    test numPair {1, 4};
    std::cout << numPair.produceSum() << '\n';

    return 0;
}