#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    cout << "Square: " << area(5) << endl;
    cout << "Rectangle: " << area(4, 6) << endl;
    cout << "Circle: " << area(3.5);

    return 0;
}