#include <iostream>

int main()
{
	std::cout << "Hello, world!" << std::endl;

	return 0;
}

/*
in the tasks.json that generate, 
"args": [
    "-fcolor-diagnostics",
    "-fansi-escape-codes",
    "-g",
    "${file}",
    "-o",
    "${fileDirname}/${fileBasenameNoExtension}"
],

the "-g" is for the debug build. change it to (O, not 0): "O1", "O2", or "O3"
for the optimization level. Lvl 2 is the best choice. 

"-pedantic-errors" adding this removes compiler extensions

do these steps to make sure the compiler doesn't whine.
Open VS Code and go to Code > Preferences > Settings. This will open a settings dialog.
Enter "insert final newline" into the search bar.
In both the Workspace Settings and User Settings tabs, ensure the checkbox labeled Files: Insert Final Newline is checked.

increase errors:
"-Wall",
"-Weffc++",
"-Wextra",
"-Wconversion",
"-Wsign-conversion",

treating warning as errors:

*/
