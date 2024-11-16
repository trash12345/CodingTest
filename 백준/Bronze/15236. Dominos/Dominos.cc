#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int ans = 0;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ans += i + j;
        }
    }

    cout << ans << "\n";

    return 0;
}