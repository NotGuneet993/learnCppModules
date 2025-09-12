#include <iostream>

class Cents {
    int cents;

public:
    Cents(int cents): cents {cents} {}

    friend Cents operator+(const Cents& c1, const Cents& c2);
    int getCents() { return cents; }
};

Cents operator+(const Cents& c1, const Cents& c2) {
    return { c1.cents + c2.cents };
}

int main() {
    Cents c1 {10};
    Cents c2 {20};
    Cents total{c1 + c2};

    std::cout << total.getCents() << '\n';
}
