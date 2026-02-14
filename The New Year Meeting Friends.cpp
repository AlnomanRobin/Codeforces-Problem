#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int a = min({x1, x2, x3});
    int c = max({x1, x2, x3});
    cout << c - a << endl;
    return 0;
}

