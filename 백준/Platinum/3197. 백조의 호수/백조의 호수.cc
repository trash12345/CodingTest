#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

char board[1515][1515];
bool vis[1515][1515];

int R, C;
int cnt;
bool isFound;

queue<pair<int, int>> w, nw, s, ns;

void input()
{
    int posr, posc;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> board[i][j];

            if (board[i][j] != 'X')
            {
                w.push({i, j});
            }

            if (board[i][j] == 'L')
            {
                posr = i;
                posc = j;
            }
        }
    }

    s.push({posr, posc});
    vis[posr][posc] = true;
}

// 얼음 -> 물
void removeIce()
{
    while (!w.empty())
    {
        auto cur = w.front();
        w.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                continue;
            }

            if (board[nx][ny] == 'X')
            {
                nw.push({nx, ny});
                board[nx][ny] = '.';
            }
        }
    }
}

void findPair()
{
    while (!s.empty())
    {
        auto cur = s.front();
        s.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                continue;
            }

            if (vis[nx][ny])
            {
                continue;
            }

            vis[nx][ny] = true;

            if (board[nx][ny] == 'L')
            {
                isFound = true;
                break;
            }

            if (board[nx][ny] == '.')
            {
                s.push({nx, ny});
            }

            if (board[nx][ny] == 'X')
            {
                ns.push({nx, ny});
            }
        }
    }
}

// BFS 를 2번 수행하는 것이 아닌 1번만 수행
void solve()
{
    while (!isFound)
    {
        findPair();

        if (isFound)
        {
            break;
        }

        removeIce();

        s = ns;
        w = nw;

        while (!ns.empty())
        {
            ns.pop();
        }

        while (!nw.empty())
        {
            nw.pop();
        }

        cnt++;
    }

    cout << cnt;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;

    input();
    solve();

    return 0;
}