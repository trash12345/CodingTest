#include <bits/stdc++.h>

using namespace std;

long long dp[50001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const long long mod = 1e9 + 9;

    long long N;
    cin >> N;

    dp[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        dp[i] = (2 * i - 1) * dp[i - 1] % mod;
    }

    cout << dp[N];

    return 0;
}