#include <iostream>

class Obj {
private:
    int a {};
    
public:

    // regular constructor
    Obj(int a)
        : a {a}
    {}

    // copy constructor     
    Obj(const Obj& o)
        : a {o.a}
    {}

    /*
    This will make a defauly copy constructor
    Obj(const Obj& o) = default

    this will make it so there cannot be a copy constructor
    Obj(const Obj& o) = delete
    */

    void printVal() {
        std::cout << "Val: " << a << "\n";
    }
};

int main() {
    Obj o1 {1};
    Obj o2 {o1};

    o1.printVal();
    o2.printVal();
    
    return 0;
}