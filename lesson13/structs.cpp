#include <iostream>

struct person {
    int age {};
    double salary {};
    std::string name {};
};

person createPerson(int age, double salary, std::string name) {
    // The compiler is smart enough to know what type it is returning
    return {age, salary, name};
}

std::ostream& operator<<(std::ostream& out, person p) {
    return out << "Name: " << p.name << " age: " << p.age << " salary: " << static_cast<double>(p.salary) << "\n";
}

void displayInformation(person p) {
    // this is using the overlaoded operator;
    std::cout << p;
}

int main() {

    std::cout << createPerson(10, 100000.00, "Luna");
    displayInformation({100, 10.0, "Tuna"});

    return 0;
}