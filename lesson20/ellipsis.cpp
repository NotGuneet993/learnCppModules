#include <iostream>
#include <cstdarg>

double average(double c, ...) {
    std::va_list list;
    double sum {};

    va_start(list, c);
    for (double i {}; i < c; ++i) { sum += va_arg(list, double); }
    va_end(list);

    return sum/c;
}

int main() {
    std::cout << average(3, 3.0, 3.0, 3.0) << '\n';
    std::cout << average(5, 3.0, 3.0, 3.0, 10.0, 2.0) << '\n';

    return 0;
}