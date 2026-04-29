#include <iostream>
using namespace std;
//abstract class
class shape {
    public :
    virtual void draw() = 0; //pure virtual function 
};
//derived class 
class circle:public shape{
    public:
    void draw(){
        cout <<"drawing a circle"<<endl;
    }
};
int main(){
    shape *s;
    circle c;
    s=&c;
    s->draw();//abstration in action 
    return 0;
}
