#include <bits/stdc++.h>

using namespace std;

int dp[2002][2002];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, K, M;
    cin >> N >> K >> M;

    // 전처리
    for (int i = 0; i <= M; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % M;
            }
        }
    }

    long long ans = 1;

    // 뤼카 정리 binomial(N, K) = binomial_sum(N_i, K_i)
    // N_i 와 K_i 는 M진법으로 나타낸 자릿수
    while (N || K)
    {
        ans = (ans * dp[N % M][K % M]) % M;
        N /= M;
        K /= M;
    }

    cout << ans;

    return 0;
}