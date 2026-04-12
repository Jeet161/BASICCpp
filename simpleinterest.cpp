#include <iostream>
using namespace std;

int main (){
    float p,r,t;
    cout<<"enter principal,rate,time:";
    cin>> p>>r>>t;
    float si=(p*r*t)/100;
    cout<<"simple interest="<<si;
    return 0;
}