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
                if (i > 1 && candy[i - 2][j] == 'v' && candy[i - 1][j] == 'o' && candy[i][j] == '^')
                {
                    cnt++;
                }
                if (j > 1 && candy[i][j - 2] == '>' && candy[i][j - 1] == 'o' && candy[i][j] == '<')
                {
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}