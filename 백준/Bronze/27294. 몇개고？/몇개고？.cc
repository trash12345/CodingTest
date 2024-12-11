#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, S;
    cin >> T >> S;

    if (12 <= T && T <= 16 && S == 0)
    {
        cout << 320;
    }
    else
    {
        cout << 280;
    }

    return 0;
}