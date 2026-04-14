#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (char c : s){
            if (c == '0') cnt0++;
            else cnt1++;
        }
        if (min(cnt0, cnt1) % 2 == 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
    return 0;
}
