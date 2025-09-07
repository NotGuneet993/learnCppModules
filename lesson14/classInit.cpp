#include <iostream>

class Point {
private:
    int x {};
    int y {};

public:
    Point(int input_x, int input_y) : x {input_x}, y {input_y} {
        std::cout << "Created a point at (" << this->x << ", " << this->y << ").\n";
    } 
};

class Point2 {
public: 
    int a {};
    int b {};

    Point2(int input_x, int input_y) {
        a = input_x;
        b = input_y;

        std::cout << "Created a point at (" << this->a << ", " << this->b << ").\n";
    }
};

void printPoints(Point2 pts) { std::cout << "The points are at (" << pts.a << ", " << pts.b << ").\n"; }


int main() {
    Point p {5, 4};
    Point2 p2{1, 2};

    printPoints({1, 3});
    return 0;
}