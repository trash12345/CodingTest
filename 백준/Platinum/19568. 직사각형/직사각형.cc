#include <bits/stdc++.h>

using namespace std;

int ans[30][30];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 15; i++)
    {
        ans[15][i] = 1;
        ans[i][15] = 225;
    }

    for (int i = 16; i < 30; i++)
    {
        ans[15][i] = 15;
        ans[i][15] = 3375;
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}