#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

char board[1001][1001];
int vis[1001][1001];

int N, M, K;
const int INF = 2e9 + 7;

void input()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            vis[i][j] = INF;
        }
    }
}

int bfs(int x1, int y1, int x2, int y2)
{
    queue<pair<int, int>> Q;

    vis[x1][y1] = 0;
    Q.push({x1, y1});

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        if (x2 == cur.first && y2 == cur.second)
        {
            return vis[x2][y2] == INF ? -1 : vis[x2][y2];
        }

        for (int dir = 0; dir < 4; dir++)
        {
            for (int i = 1; i <= K; i++)
            {
                int nx = cur.first + dx[dir] * i;
                int ny = cur.second + dy[dir] * i;

                if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                {
                    continue;
                }

                if (board[nx][ny] == '#')
                {
                    break;
                }

                if (vis[nx][ny] <= vis[cur.first][cur.second])
                {
                    break;
                }

                if (board[nx][ny] == '.' && vis[nx][ny] == INF)
                {
                    Q.push({nx, ny});
                    vis[nx][ny] = vis[cur.first][cur.second] + 1;
                }
            }
        }
    }

    return -1;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;

    input();

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << bfs(x1 - 1, y1 - 1, x2 - 1, y2 - 1);

    return 0;
}