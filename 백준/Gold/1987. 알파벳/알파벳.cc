#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

char board[21][21];
bool vis[26];

int R, C;
int ans;

int dfs(int i, int j, int cnt)
{
    vis[board[i][j] - 'A'] = true;
    ans = max(ans, cnt);

    for (int dir = 0; dir < 4; dir++)
    {
        int nx = i + dx[dir];
        int ny = j + dy[dir];

        if (nx < 0 || nx >= R || ny < 0 || ny >= C)
        {
            continue;
        }

        if (!vis[board[nx][ny] - 'A'])
        {
            vis[board[nx][ny] - 'A'] = true;
            dfs(nx, ny, cnt + 1);
            vis[board[nx][ny] - 'A'] = false;
        }
    }

    return ans;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> board[i][j];
        }
    }

    cout << dfs(0, 0, 1);

    return 0;
}