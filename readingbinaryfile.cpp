#include <iostream>
#include <fstream>
using namespace std;

int main() {

    struct Student {
        int roll;
        char name[20];
        float marks;
    };

    Student s;

    // Open existing binary file
    ifstream file("sample.bin", ios::binary);

    if (!file) {
        cout << "Error: Unable to open sample.bin!" << endl;
        return 1;
    }

    // Read one record from binary file
    file.read((char*)&s, sizeof(s));
    file.close();

    // Display the data
    cout << "Roll No : " << s.roll << endl;
    cout << "Name    : " << s.name << endl;
    cout << "Marks   : " << s.marks << endl;

    return 0;
}
