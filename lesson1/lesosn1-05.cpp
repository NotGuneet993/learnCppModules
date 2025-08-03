#include <iostream>

int main() {
    // input and output 

    std::cout << "The cout function is used to display infromation to the console. It stands for console output." << std::endl;

    // endl adds a line break to the output 
    // it also forces a bufferflush 
    // these bufferflushes are often slow 

    std::cout << "It is recommended to use \\n instead. \\n just breaks the line and does not cause a buffer flush.\n\n";

    // << and >> can be though as conveyor belts.
    int input {};
    std::cout << "Enter a number: ";

    // it may look like cin is automatically adding a linebreak but it is capturing the enter and displaying it too.
    std::cin >> input;  
    std::cout << "You entered: " << input << "\n";

    // you can get two numbers like this:
    // Values entered should be separated by whitespace (spaces, tabs, or newlines).
    int num1 {};
    int num2 {};

    std::cout << "Enter 2 numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "You've entered " << num1 << " and " << num2 << "\n";

    // cin buffer behavior 
    /*
    If you have 2 cins, and you type 4\n and then 5\n it will break it into two variables

    but if you type "4 5\n" it will place the 4 in the first cin and then go to the second cin and place 5
    with out waiting for the user to enter 5.
    */

    return 0;
}
