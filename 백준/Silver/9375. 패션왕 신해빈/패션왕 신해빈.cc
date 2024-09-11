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
        map<string, int> mp;

        int N;
        int ans = 1;
        cin >> N;

        while (N--)
        {
            string S1, S2;
            cin >> S1 >> S2;

            mp[S2]++;
        }

        for (auto i : mp)
        {
            ans *= i.second + 1;
        }

        cout << ans - 1 << "\n";
    }

    return 0;
}