#include <iostream>

#include "Point.cpp"

int main() {
    Point<int> p(1, 1);
    Point<float> p2(1.2, 3.4);

    std::cout << p << std::endl;
    std::cout << p2 << std::endl;

    return 0;
}