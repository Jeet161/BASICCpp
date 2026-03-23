#include <iostream>
using namespace std;

int main() {
    auto onButtonClick = []() {
        cout << "Button clicked\n";
    };

    int choice;
    cout << "Press 1 to click the button: ";
    cin >> choice;

    if (choice == 1) {
        onButtonClick();
    } else {
        cout << "Button not clicked\n";
    }

    return 0;
}
