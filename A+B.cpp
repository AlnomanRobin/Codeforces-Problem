#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,a,b;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        a = s[0] - '0';
        b = s[2] - '0';
        cout << a + b << "\n";
    }

    return 0;
}
