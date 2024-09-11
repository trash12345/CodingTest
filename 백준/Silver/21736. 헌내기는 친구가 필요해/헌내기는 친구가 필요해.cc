#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

char board[601][601];
bool vis[601][601];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;

    int N, M;
    int cnt = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (board[i][j] == 'I')
            {
                Q.push({i, j});
                vis[i][j] = true;
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
            if (!vis[nx][ny] && board[nx][ny] != 'X')
            {
                if (board[nx][ny] == 'P')
                {
                    cnt++;
                }
                vis[nx][ny] = true;
                Q.push({nx, ny});
            }
        }
    }

    if (cnt == 0)
    {
        cout << "TT";
    }
    else
    {
        cout << cnt;
    }

    return 0;
}