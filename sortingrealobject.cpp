#include <bits/stdc++.h>
using namespace std;
struct Product {
    string name;
    int price;
};

int main() {
    vector<Product> products = {
        {"Phone", 15000},
        {"Laptop", 60000},
        {"Watch", 3000}
    };

    sort(products.begin(), products.end(),
         [](const Product& a, const Product& b) {
             return a.price < b.price;
         });

    for (auto& p : products)
        cout << p.name << " ";
}
