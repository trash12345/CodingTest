#include <bits/stdc++.h>

using namespace std;

// K개로 N을 만드는 경우의 수
int dp[201][201];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int mod = 1000000000;

    int N, K;
    cin >> N >> K;

    for (int i = 0; i <= N; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 0; i <= K; i++)
    {
        dp[i][1] = i;
    }

    for (int j = 2; j <= N; j++)
    {
        for (int i = 2; i <= K; i++)
        {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % mod;
        }
    }

    cout << dp[K][N];

    return 0;
}