#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int res = Y - X;

        if (res <= 3)
        {
            cout << res << "\n";
            continue;
        }

        int square = (int)(sqrt(res));

        if (square * square == res)
        {
            cout << 2 * square - 1 << "\n";
        }
        else
        {
            if (res - square * square <= square)
            {
                cout << 2 * square << "\n";
            }
            else
            {
                cout << 2 * square + 1 << "\n";
            }
        }
    }

    return 0;
}