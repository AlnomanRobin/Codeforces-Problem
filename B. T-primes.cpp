#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAX = 1000000;
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int n;
    cin >> n;

    while (n--) {
        long long x;
        cin >> x;

        long long r = sqrt(x);
        if (r * r == x && isPrime[r]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
