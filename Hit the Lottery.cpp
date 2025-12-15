#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int bills = 0;
    int denom[] = {100, 20, 10, 5, 1};

    for(int d : denom) {
        bills += n / d;
        n %= d;
    }

    cout << bills << endl;
    return 0;
}
