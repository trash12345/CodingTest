#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int N, M;

int board[101][101];
bool vis[101][101];
int T;

vector<int> cheese;

void input()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
}

void init()
{
    for (int i = 0; i < N; i++)
    {
        fill(vis[i], vis[i] + M, false);
    }
}

void bfs()
{
    while (1)
    {
        int cnt = 0;

        init();

        queue<pair<int, int>> Q;

        Q.push({0, 0});
        vis[0][0] = true;

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

                if (vis[nx][ny])
                {
                    continue;
                }

                vis[nx][ny] = true;

                if (board[nx][ny] == 1)
                {
                    board[nx][ny] = 0;
                    cnt++;
                }
                else if (board[nx][ny] == 0)
                {
                    Q.push({nx, ny});
                }
            }
        }

        cheese.push_back(cnt);
        T++;

        if (cnt == 0)
        {
            cout << T - 1 << "\n";
            cout << cheese[cheese.size() - 2] << "\n";
            return;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    input();
    bfs();

    return 0;
}