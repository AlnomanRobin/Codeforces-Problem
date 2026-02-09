#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int current = 0;
    int maxCapacity = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current -= a;   // passengers exit
        current += b;   // passengers enter

        maxCapacity = max(maxCapacity, current);
    }

    cout << maxCapacity << endl;
    return 0;
}
