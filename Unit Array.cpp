#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int neg =0;
        for (int i=0;i<n;i++){
            int x;
            cin >> x;
            if (x == -1)
                neg++;
        }
        int operations =0;
        while (neg > n - neg){
            neg--;
            operations++;
        }
        if (neg % 2 == 1){
            operations++;
        }
        cout << operations << '\n';
    }

    return 0;
}
