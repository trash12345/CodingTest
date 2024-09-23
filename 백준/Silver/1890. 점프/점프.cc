#include <bits/stdc++.h>

using namespace std;

int N;

long long dp[101][101];
int board[101][101];

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

    cin >> N;

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
            if (board[i][j] == 0 || dp[i][j] == 0)
            {
                continue;
            }

            if (!OOB(i + board[i][j], j))
            {
                dp[i + board[i][j]][j] += dp[i][j];
            }
            if (!OOB(i, j + board[i][j]))
            {
                dp[i][j + board[i][j]] += dp[i][j];
            }
        }
    }

    cout << dp[N - 1][N - 1];

    return 0;
}