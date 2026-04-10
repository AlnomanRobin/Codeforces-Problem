#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10){
        cout << -1 << endl;
        return 0;
    }
    string s = to_string(t);
    if ((int)s.size() > n){
        cout << -1 << endl;
        return 0;
    }
    while ((int)s.size() < n){
        s += '0';
    }

    cout << s << endl;
    return 0;
}
