#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p stores address: " << p << endl;
    cout << "Value using pointer: " << *p << endl;

    return 0;
}