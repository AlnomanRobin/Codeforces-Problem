#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    const int MAXA = 100000;
    vector<long long> cnt(MAXA + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    vector<long long> dp(MAXA + 1, 0);
    dp[0] = 0;
    dp[1] = cnt[1] * 1;
    for (int i = 2; i <= MAXA; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
    }
    cout << dp[MAXA] << "\n";
    return 0;
}
