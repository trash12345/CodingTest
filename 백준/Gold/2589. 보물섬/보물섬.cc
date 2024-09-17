#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

char board[51][51];
int vis[51][51];

int R, C;
int ans;

int bfs(int i, int j)
{
    if (board[i][j] == 'W')
        return 0;

    queue<pair<int, int>> Q;
    Q.push({i, j});
    vis[i][j] = 1;

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                continue;
            }

            if (board[nx][ny] == 'L' && vis[nx][ny] == 0)
            {
                Q.push({nx, ny});
                vis[nx][ny] = vis[cur.first][cur.second] + 1;
                ans = max(ans, vis[nx][ny]);
            }
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

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (board[i][j] == 'L')
            {
                ans = max(ans, bfs(i, j));
                for (int i = 0; i < R; i++)
                {
                    fill(vis[i], vis[i] + C, 0);
                }
            }
        }
    }

    cout << ans - 1;

    return 0;
}