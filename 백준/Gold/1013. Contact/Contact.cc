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
        string S;
        cin >> S;

        string ans = regex_match(S, regex("(100+1+|01)+")) ? "YES" : "NO";

        cout << ans << "\n";
    }

    return 0;
}