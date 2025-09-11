#include <iostream>

int main(int argc, char** argv) {
    for (int i{}; i < argc; ++i) {
        std::cout << i << ": " << argv[i] << "\n";
    }


    // if you want to include spaces wrap the sentence in " "
    // if you want to include " " use \" \"
    return 0;
}