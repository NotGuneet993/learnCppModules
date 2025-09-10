#include <iostream>
#include <thread>       // add '-pthread' when compiling between clang++ and file.cpp

void threadFunc(const int tId) {
    for (int i {0}; i < 250000; ++i) {
        std::cout << tId << " : " << i << '\n';
    }
}

int main() {
    unsigned int cores (std::thread::hardware_concurrency());
    std::cout << "There are " << cores << " cores.\n";

    cores = 10 ;       // main needs one 

    std::vector<std::thread*> threads;
    for (int i{0}; i < cores; ++i) {
        threads.push_back(new std::thread(threadFunc, i+1));
    }

    // clean up
    for (int i{0}; i < cores; ++i) {
        threads[i]->join();
        delete threads[i];
    }
    
    return 0;
}
