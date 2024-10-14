#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int R, C;
char board[1001][1001];
bool visS[1001][1001], visF[1001][1001];

queue<pair<int, int>> f, s;

void input()
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> board[i][j];

            if (board[i][j] == 'F')
            {
                f.push({i, j});
            }

            if (board[i][j] == 'J')
            {
                s.push({i, j});
            }
        }
    }
}

void fire()
{
    int len = f.size();

    for (int i = 0; i < len; i++)
    {
        auto cur = f.front();
        f.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                continue;
            }

            if (visF[nx][ny])
            {
                continue;
            }

            if (board[nx][ny] != '.')
            {
                continue;
            }

            board[nx][ny] = 'F';
            f.push({nx, ny});
            visF[nx][ny] = true;
        }
    }
}

int solve()
{
    int escape = 0;

    while (!s.empty())
    {
        escape++;
        fire();

        int len = s.size();

        for (int i = 0; i < len; i++)
        {
            auto cur = s.front();
            s.pop();

            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if (nx < 0 || nx >= R || ny < 0 || ny >= C)
                {
                    return escape;
                }

                if (visS[nx][ny])
                {
                    continue;
                }

                if (board[nx][ny] != '.')
                {
                    continue;
                }

                board[nx][ny] = 'J';
                s.push({nx, ny});
                visS[nx][ny] = true;
            }
        }
    }

    return -999;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;
    input();

    int ans = solve();

    if (ans == -999)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        cout << ans << "\n";
    }

    return 0;
}