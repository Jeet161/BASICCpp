#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0)
        throw "Cannot divide by zero";
    cout << a / b;
}

int main() {
    try {
        divide(10, 0);
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}
