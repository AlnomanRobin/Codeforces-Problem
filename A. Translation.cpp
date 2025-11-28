#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    if (!(cin >> s)) return 0;
    cin >> t;

    string rs = s;
    reverse(rs.begin(), rs.end());

    cout << (rs == t ? "YES\n" : "NO\n");
    return 0;
}
