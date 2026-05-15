#include <bits/stdc++.h>
using namespace std;
struct sensordata{
    int sensorid;
    double value;
};
int main(){
    vector<sensordata>readings{
        {1,23.5},
        {2,45.1},
        {3,30.8}
    };
    for (const auto& r:readings)
    cout<<"sensor"<<r.sensorid<<":"<<r.value<<'\n';
}