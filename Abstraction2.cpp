#include <iostream>
using namespace std;

// Abstract class
class LoginSystem {
protected:
    string password;     // Hidden data

public:
    virtual void login() = 0;    // Abstract method
};

// Concrete implementation
class UserLogin : public LoginSystem {
public:
    void login() {
        password = "admin123";   // Internal logic
        cout << "User logged in successfully" << endl;
    }
};

int main() {
    LoginSystem* l;     // Abstract pointer
    UserLogin u;
    l = &u;
    l->login();         // Access through abstraction
    return 0;
}