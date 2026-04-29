#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> messages;

    messages.push("Hello");
    messages.push("How are you?");

    while (!messages.empty()) {
        cout << messages.front() << '\n';
        messages.pop();
    }
}

