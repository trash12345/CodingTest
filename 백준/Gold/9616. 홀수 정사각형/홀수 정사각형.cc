#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        long long N, M;
        cin >> N >> M;
        long long ans = 0;

        if (N == 0 && M == 0)
        {
            break;
        }

        for (long long i = 1; i <= min(M, N); i += 2)
        {
            ans += (M - i + 1) * (N - i + 1) * i;
        }

        cout << ans << "\n";
    }

    return 0;
}