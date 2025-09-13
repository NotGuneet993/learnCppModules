#include <iostream>

class Person {      // since this is at the top of the inheritance chain, this will be initalized first.
    std::string m_name;

protected:
    std::string_view getName() { return m_name; }

public:

    Person(const std::string& name): m_name{name} {}

    void inline sayHi() { std::cout << "Hi! My name is " << m_name; }

    void wasteFunction() { std::cout << "I have feelings."; }

};

class Mecha {
    std::string m_name;

protected:
    std::string_view getName() { return m_name; }

public:
    void sayHi() { std::cout << "AHHHHHHH"; }
};

class Clanker : public Person, public Mecha {
    int m_volts {};

public:
    Clanker(const std::string& name, int volts): Person(name), m_volts{volts} {
        std::cout << "Created a clanker out of " << Person::getName() << "\n";
    }

    void wasteFunction() = delete;      // a clanker does not have feelings.

};

int main() {
    Clanker clanker{"Joe Goldberg", 1500};
    clanker.Mecha::sayHi();            // tbh this feels illegal.
    std::cout << '\n';

    // clanker.wasteFunction(); compiler err

    return 0;
}
