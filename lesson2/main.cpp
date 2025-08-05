#include <iostream>
#include "add.h"

// there used to be a header here. its now in the h file // this is needed since the function is in another file.

int main()
{
    std::cout << "the addition result is: " << add(1, 3) << "\n";
    return 0;
}

/*
This lesson is about compiling multiple files.
Make sure to add all the file names when compiling.
I manually added them them to the task.json
I replaced ${file}
*/
