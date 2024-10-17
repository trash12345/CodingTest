#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
    int cnt = 1;
    int wall;
};

int N, M, K;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int board[1001][1001];
bool vis[1001][1001][11];

void input()
{
    for (int i = 0; i < N; i++)
    {
        string line;
        cin >> line;

        for (int j = 0; j < M; j++)
        {
            board[i][j] = line[j] - '0';
        }
    }
}

int bfs()
{
    queue<Point> Q;

    Q.push({0, 0, 1, 0});
    vis[0][0][0] = true;

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        if (cur.x == N - 1 && cur.y == M - 1)
        {
            return cur.cnt;
        }

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
            {
                continue;
            }

            if (vis[nx][ny][cur.wall])
            {
                continue;
            }

            if (board[nx][ny] == 0)
            {
                vis[nx][ny][cur.wall] = true;
                Q.push({nx, ny, cur.cnt + 1, cur.wall});
            }

            if (board[nx][ny] == 1 && cur.wall < K && !vis[nx][ny][cur.wall + 1])
            {
                vis[nx][ny][cur.wall + 1] = true;
                Q.push({nx, ny, cur.cnt + 1, cur.wall + 1});
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

    cout << bfs();

    return 0;
}