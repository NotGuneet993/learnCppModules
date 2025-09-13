#include <iostream>
#include <memory>
#include <utility>

class object {
    int m_var{};

public:
    object(int var): m_var{var} {} 

    int getVar() { return m_var; } 
};

int main(){
    std::unique_ptr<object> smtPtr1 {new object(1)};
    std::unique_ptr<object> smtPtr2 {new object(2)};

    std::cout << (smtPtr1 ? std::to_string(smtPtr1->getVar()) : "ptr is null") << "\n";
    std::cout << (smtPtr2 ? std::to_string(smtPtr2->getVar()) : "ptr is null") << "\n";

    // copy & move semantics 
    // smtPtr1 = smtPtr2;  --> assignment operator wont work becauese it's a unique ptr
    smtPtr2 = std::move(smtPtr1);

    std::cout << (smtPtr1 ? std::to_string(smtPtr1->getVar()) : "ptr is null") << "\n";
    std::cout << (smtPtr2 ? std::to_string(smtPtr2->getVar()) : "ptr is null") << "\n";

    return 0;
}
