#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxHeight = -1;
    int minHeight = 101;
    int maxPos = 0;
    int minPos = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > maxHeight) {
            maxHeight = a[i];
            maxPos = i;  // leftmost max
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(a[i] < minHeight) {
            minHeight = a[i];
            minPos = i;  // rightmost min
        }
    }

    int ans = maxPos + (n - 1 - minPos);

    if(maxPos > minPos) {
        ans--;
    }

    cout << ans << endl;

    return 0;
}
