#include <iostream>
using namespace std;

constexpr int ADC_RESOLUTION = 1023;
constexpr double VREF = 5.0;

double adcConvert(double analogVoltage) {
    return (analogVoltage / VREF) * ADC_RESOLUTION;
}

int main() {
    double voltage = 2.5;
    cout << "Digital Value: " << static_cast<int>(adcConvert(voltage));
}
