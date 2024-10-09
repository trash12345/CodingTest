#include <bits/stdc++.h>

using namespace std;

int dp[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int mn = 2e9;

    dp[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        int num;
        cin >> num;

        mn = min(num, mn);

        int tmp = num - mn;

        dp[i] = max(tmp, dp[i - 1]);
    }

    cout << dp[N];

    return 0;
}