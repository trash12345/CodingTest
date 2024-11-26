#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int dp[2][100001] = {0};
        int sticker[2][100001] = {0};

        for (int i = 0; i < 2; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                cin >> sticker[i][j];
            }
        }

        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = sticker[0][1];
        dp[1][1] = sticker[1][1];

        for (int i = 2; i <= N; i++)
        {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
        }

        cout << max(dp[0][N], dp[1][N]) << "\n";
    }

    return 0;
}