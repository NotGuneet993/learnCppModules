#include <iostream>

/*
The code segment (also called a text segment), where the compiled program sits in memory. The code segment is typically read-only.
The bss segment (also called the uninitialized data segment), where zero-initialized global and static variables are stored.
The data segment (also called the initialized data segment), where initialized global and static variables are stored.
The heap, where dynamically allocated variables are allocated from.
The call stack, where function parameters, local variables, and other function-related information are stored.
*/

int main() {    
    int stack[100000000];
    std::cout << "a " << stack[0];
}