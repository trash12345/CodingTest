#include <bits/stdc++.h>

using namespace std;

int board[51][51];
int vis[51][51];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int N, M, r, c, d;
int cnt;

// dfs로 경로 확인하기
void dfs()
{
    for (int i = 0; i < 4; i++)
    {
        int nxt = (d + 3 - i) % 4;
        int nx = r + dx[nxt];
        int ny = c + dy[nxt];

        if (nx < 0 || nx >= N || ny < 0 || ny >= M)
        {
            continue;
        }

        if (board[nx][ny] == 1 || vis[nx][ny] == 1)
        {
            continue;
        }

        if (board[nx][ny] == 0 && vis[nx][ny] == 0)
        {
            r = nx;
            c = ny;
            d = nxt;
            cnt++;
            vis[nx][ny] = 1;
            dfs();
        }
    }

    // 네 방향 모두 청소 OR 벽인 경우 구현
    // 1. 반대 방향으로 이동 2. 벽이면 return
    int rnxt = d > 1 ? d - 2 : d + 2;
    int rnx = r + dx[rnxt];
    int rny = c + dy[rnxt];

    if (rnx < 0 || rnx >= N || rny < 0 || rny >= M)
    {
        return;
    }

    if (board[rnx][rny] == 0)
    {
        r = rnx;
        c = rny;
        dfs();
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    cin >> r >> c >> d;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
    vis[r][c] = 1;
    cnt++;

    dfs();

    cout << cnt;

    return 0;
}