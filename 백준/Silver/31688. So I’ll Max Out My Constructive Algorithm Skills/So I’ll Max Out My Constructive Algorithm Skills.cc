#include <bits/stdc++.h>

using namespace std;

int board[65][65];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        vector<int> V;

        int N;
        cin >> N;

        int cnt = 0;
        int tmp = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> board[i][j];
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < N; j++)
                {
                    V.push_back(board[i][j]);
                    if (V.size() != 0 && tmp > board[i][j])
                    {
                        cnt++;
                    }
                    tmp = board[i][j];
                }
            }
            else
            {
                for (int j = N - 1; j >= 0; j--)
                {
                    V.push_back(board[i][j]);
                    if (V.size() != 0 && tmp > board[i][j])
                    {
                        cnt++;
                    }
                    tmp = board[i][j];
                }
            }
        }

        if (cnt < N * N / 2)
        {
            reverse(V.begin(), V.end());
        }

        for (int i = 0; i < V.size(); i++)
        {
            cout << V[i] << " ";
        }
    }

    return 0;
}