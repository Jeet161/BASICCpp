#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "save.txt";
    string data;

    // -------------------- Write to File --------------------
    ofstream writeFile(filename);
    writeFile << "This is a C++ file handling program." << endl;
    writeFile << "File handling is easy using fstream." << endl;
    writeFile.close();

    cout << "Data written to file successfully.\n\n";

    // -------------------- Append to File --------------------
    ofstream appendFile(filename, ios::app);
    appendFile << "This line is added using append mode." << endl;
    appendFile.close();

    cout << "Data appended to file successfully.\n\n";

    // -------------------- Read from File --------------------
    ifstream readFile(filename);
    cout << "Reading file content:\n\n";
    while (getline(readFile, data)) {
        cout << data << endl;
    }
    readFile.close();

    // -------------------- Error Handling --------------------
    ifstream errorFile("nofile.txt");
    if (!errorFile) {
        cout << "\nError: File not found!" << endl;
    }

    return 0;
}
