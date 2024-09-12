#include <bits/stdc++.h>

using namespace std;

// 1 -> 2,3 / 2 -> 1,3 / 3 -> 1,2
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int rgb[1001][3];
    int dp[1001][3];
    int N;
    int ans = INT_MAX;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> rgb[i][j];
        }
    }

    // R이 선택, G가 선택, B가 선택
    for (int RGB = 0; RGB < 3; RGB++)
    {
        // 초기 설정
        for (int i = 0; i < 3; i++)
        {
            if (i == RGB)
            {
                dp[1][i] = rgb[1][i];
            }
            else
            {
                dp[1][i] = 1e9 + 7;
            }
        }

        for (int i = 2; i <= N; i++)
        {
            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i][0];
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i][1];
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + rgb[i][2];
        }

        for (int i = 0; i < 3; i++)
        {
            if (i == RGB)
            {
                continue;
            }
            else
            {
                ans = min(ans, dp[N][i]);
            }
        }
    }

    cout << ans;

    return 0;
}