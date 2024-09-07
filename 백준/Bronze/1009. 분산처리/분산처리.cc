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
        int a, b;
        cin >> a >> b;

        int ans = 1;

        for (int i = 0; i < b; i++)
        {
            ans *= a;
            ans = ans % 10;
        }

        cout << (ans == 0 ? 10 : ans) << "\n";
    }

    return 0;
}