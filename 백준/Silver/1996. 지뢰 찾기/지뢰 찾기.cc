#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

char board[1001][1001];
char ans[1001][1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] != '.')
            {
                ans[i][j] = '*';
            }
            else
            {
                char val = '0';

                for (int dir = 0; dir < 8; dir++)
                {
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];

                    if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                    {
                        continue;
                    }

                    if (board[nx][ny] != '.')
                    {
                        val += board[nx][ny] - '0';
                    }

                    if (val > '9')
                    {
                        val = 'M';
                    }

                    ans[i][j] = val;
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << ans[i][j];
        }
        cout << "\n";
    }

    return 0;
}