#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

// 처음 연구소
int lab[8][8];
// 벽 3개를 세우고 난 연구소
int walllab[8][8];

int N, M;
int ans;

void input()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> lab[i][j];
        }
    }
}

// 배열 복사 arr1을 arr2와 같게 복사
void copy(int arr1[8][8], int arr2[8][8])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr1[i][j] = arr2[i][j];
        }
    }
}

void bfs()
{
    int finallab[8][8];
    int safezone = 0;

    copy(finallab, walllab);

    queue<pair<int, int>> Q;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (finallab[i][j] == 2)
            {
                Q.push({i, j});
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

            if (finallab[nx][ny] == 0)
            {
                finallab[nx][ny] = 2;
                Q.push({nx, ny});
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (finallab[i][j] == 0)
            {
                safezone++;
            }
        }
    }

    ans = max(ans, safezone);
}

void makewall(int cnt)
{
    if (cnt == 3)
    {
        bfs();
        return;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (walllab[i][j] == 0)
            {
                walllab[i][j] = 1;
                makewall(cnt + 1);
                walllab[i][j] = 0;
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    input();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            copy(walllab, lab);

            if (walllab[i][j] == 0)
            {
                walllab[i][j] = 1;
                makewall(1);
                walllab[i][j] = 0;
            }
        }
    }

    cout << ans;

    return 0;
}