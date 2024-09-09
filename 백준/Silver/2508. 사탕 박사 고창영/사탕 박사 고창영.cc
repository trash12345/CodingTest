#include <bits/stdc++.h>

using namespace std;

char candy[401][401];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        int cnt = 0;
        cin >> r >> c;

        for (int i = 0; i < r; i++)
        {
            cin >> candy[i];
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // 사탕 못만드는 좌표 4개 (0,0) (0,c-1), (r-1,0) (r-1,c-1)
                if ((i == 0 && j == 0) || (i == 0 && j == c - 1) || (i == r - 1 && j == 0) || (i == r - 1 && j == c - 1))
                {
                    continue;
                }

                if (candy[i][j] == 'o' && (j == 0 || j == c - 1) && candy[i - 1][j] == 'v' && candy[i + 1][j] == '^')
                {
                    cnt++;
                }
                else if (candy[i][j] == 'o' && (i == 0 || i == r - 1) && candy[i][j - 1] == '>' && candy[i][j + 1] == '<')
                {
                    cnt++;
                }
                else if (candy[i][j] == 'o' && ((candy[i][j - 1] == '>' && candy[i][j + 1] == '<') || (candy[i - 1][j] == 'v' && candy[i + 1][j] == '^')))
                {
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}