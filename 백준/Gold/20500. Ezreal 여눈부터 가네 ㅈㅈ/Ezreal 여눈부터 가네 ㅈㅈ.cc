#include <bits/stdc++.h>

using namespace std;

// 나머지와 N자릿수
long long dp[3][1516];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int mod = 1000000007;

    int N;
    cin >> N;

    dp[0][2] = 1;
    dp[1][2] = 1;

    for (int i = 3; i <= N; i++)
    {
        dp[0][i] = (dp[1][i - 1] + dp[2][i - 1]) % mod;
        dp[1][i] = (dp[0][i - 1] + dp[2][i - 1]) % mod;
        dp[2][i] = (dp[0][i - 1] + dp[1][i - 1]) % mod;
    }

    cout << dp[0][N];

    return 0;
}