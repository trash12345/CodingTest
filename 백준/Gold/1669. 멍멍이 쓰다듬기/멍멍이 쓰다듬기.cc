#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X, Y;
    cin >> X >> Y;
    int res = Y - X;

    if (res <= 3)
    {
        cout << res;
        return 0;
    }

    int square = (int)(sqrt(res));

    if (square * square == res)
    {
        cout << 2 * square - 1;
    }
    else
    {
        if (res - square * square <= square)
        {
            cout << 2 * square;
        }
        else
        {
            cout << 2 * square + 1;
        }
    }

    return 0;
}