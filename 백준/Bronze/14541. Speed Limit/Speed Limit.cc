#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int N;
        cin >> N;

        if (N == -1)
        {
            break;
        }

        int ans = 0;
        int tmp = 0;

        for (int i = 0; i < N; i++)
        {
            int s, t;
            cin >> s >> t;

            ans += s * (t - tmp);
            tmp = t;
        }

        cout << ans << " miles\n";
    }

    return 0;
}