#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int M, N;

int board[501][501];
int dp[501][501];

void input()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
            dp[i][j] = -1;
        }
    }
}

int dfs(int i, int j)
{
    if (i == M - 1 && j == N - 1)
    {
        return 1;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    dp[i][j] = 0;

    for (int dir = 0; dir < 4; dir++)
    {
        int nx = i + dx[dir];
        int ny = j + dy[dir];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N)
        {
            continue;
        }

        if (board[i][j] > board[nx][ny])
        {
            dp[i][j] += dfs(nx, ny);
        }
    }

    return dp[i][j];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;

    input();

    cout << dfs(0, 0);

    return 0;
}