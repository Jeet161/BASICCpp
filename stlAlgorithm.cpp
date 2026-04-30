#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> salaries = {20000, 40000, 60000, 80000};

    auto it = find_if(salaries.begin(), salaries.end(),
                      [](int salary) {
                          return salary > 50000;
                      });

    if (it != salaries.end())
        cout << "First high salary: " << *it;
}