#include <iostream>

class TestClass
{
private:
    int age{};
    std::string name {};

public:
    // getters should return by value or return const ref to lval if it's expensive 
    int getAge() { return age; }
    const std::string& getName() { return name; }

    void setAge(int a) { age = a; }
    void setName(std::string n) { name = n; }

};

int main() {

    TestClass tc;
    tc.setAge(4);
    tc.setName("Luna");

    std::cout << tc.getName() << " is " << tc.getAge() << " years old\n";

    return 0;
}