#include <iostream>

// regular enums 
enum Pets {
    dog,        // 0
    cat,        // 1
    bird = 5,   // 5
    cow,        // 6
};

// enums in namespaces to avoid naming conflicts
namespace Colors {
    enum Colors {
        blue,
        green,
        yellow,
        red,
        black,
    };
};

// enum classes
enum class Tech {
    iPod,
    iPad,
    iPhone
};

enum class Clothes {
    pants,
    shirt,
    hat,
};


// operator overloader helper 
std::string getColorString(Colors::Colors color) {
    switch (color) {
        case Colors::blue: return "blue";
        case Colors::green: return "green";
        case Colors::yellow: return "yellow";
        case Colors::red: return "red";
        case Colors::black: return "black";
        default: return "???";
    }
}

// operator overloader 
std::ostream& operator<<(std::ostream& out, Colors::Colors color) {
    return out << getColorString(color);
}

int main() {

    Colors::Colors obj {};
    std::cout << "This is an example of operator overloading: " << obj << "\n";
    
    // this gives a compiler warning
    //std::cout << "(Comparing unscoped enumerations) Checking if blue is equal to dog: " << static_cast<bool>(dog == Colors::blue) << "\n";
    // using enum classes instead prevents this from being comparable. 

    return 0;
}