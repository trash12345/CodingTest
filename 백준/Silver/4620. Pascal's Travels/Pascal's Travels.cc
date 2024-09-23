#include <bits/stdc++.h>

using namespace std;

int N;

long long dp[101][101];
char board[101][101];

bool OOB(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= N)
    {
        return true;
    }
    return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        cin >> N;

        for (int i = 0; i < 100; i++)
        {
            fill(board[i], board[i] + 100, 0);
            fill(dp[i], dp[i] + 100, 0);
        }

        if (N == -1)
        {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> board[i][j];
            }
        }

        dp[0][0] = 1;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (board[i][j] == '0' || dp[i][j] == 0)
                {
                    continue;
                }

                int val = board[i][j] - '0';

                if (!OOB(i + val, j))
                {
                    dp[i + val][j] += dp[i][j];
                }
                if (!OOB(i, j + val))
                {
                    dp[i][j + val] += dp[i][j];
                }
            }
        }

        cout << dp[N - 1][N - 1] << "\n";
    }

    return 0;
}