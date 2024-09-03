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
        int a, b, c;
        cin >> a >> b >> c;

        int mn = min(a, min(b, c));

        cout << mn << "\n";
    }

    return 0;
}