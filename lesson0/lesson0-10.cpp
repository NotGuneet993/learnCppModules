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
*/