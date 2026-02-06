#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long sx = 0, sy = 0, sz = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    if (sx == 0 && sy == 0 && sz == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
