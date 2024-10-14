#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int w, h;
char board[1001][1001];
bool visS[1001][1001], visF[1001][1001];

queue<pair<int, int>> f, s;

void input()
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> board[i][j];

            if (board[i][j] == '*')
            {
                f.push({i, j});
            }

            if (board[i][j] == '@')
            {
                s.push({i, j});
            }
        }
    }
}

void init()
{
    while (!f.empty())
    {
        f.pop();
    }

    while (!s.empty())
    {
        s.pop();
    }

    for (int i = 0; i < h; i++)
    {
        fill(visS[i], visS[i] + 1001, false);
        fill(visF[i], visF[i] + 1001, false);
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

            if (nx < 0 || nx >= h || ny < 0 || ny >= w)
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

            board[nx][ny] = '*';
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

                if (nx < 0 || nx >= h || ny < 0 || ny >= w)
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

                board[nx][ny] = '@';
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

    int T;
    cin >> T;

    while (T--)
    {
        init();

        cin >> w >> h;
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
    }

    return 0;
}