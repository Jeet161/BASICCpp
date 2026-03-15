#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void area ()=0;
};

class Rectangle : public Shape {
    public:
    void area(){
        int length = 10;
        int breadth =5;
        cout<<"area of Rectangle = "<<length * breadth<<endl;
    }
};

int main() {
    Shape* s;               // Pointer of abstract class
    Rectangle r;            // Object of derived class
    s = &r;                 // Base pointer → derived object
    s->area();              // Calls Rectangle's area()
    return 0;               // End of program
}