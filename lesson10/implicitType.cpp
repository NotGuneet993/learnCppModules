#include <iostream>

int main() {
    int a (3.5);            // ( ) does not care about data loss from double -> int
    // int b {3.5};         // this will fail because { } throws an error when there could be data loss

    return 0;
}