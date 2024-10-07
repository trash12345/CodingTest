#include <bits/stdc++.h>

using namespace std;

int dp[501][501];
int mat[501][2];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> mat[i][0] >> mat[i][1];
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; i + j <= N; j++)
        {
            dp[j][i + j] = INT_MAX;

            for (int k = j; k <= i + j; k++)
            {
                dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + mat[j][0] * mat[k][1] * mat[i + j][1]);
            }
        }
    }

    cout << dp[1][N];

    return 0;
}