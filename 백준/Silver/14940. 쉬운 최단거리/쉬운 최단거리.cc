#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int board[1001][1001];
int dist[1001][1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        fill(dist[i], dist[i] + M, -1);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];

            if (board[i][j] == 2)
            {
                Q.push({i, j});
                dist[i][j] = 0;
            }
        }
    }

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
            {
                continue;
            }
            if (dist[nx][ny] == -1 && board[nx][ny] != 0)
            {
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                Q.push({nx, ny});
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (dist[i][j] == -1 && board[i][j] == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}