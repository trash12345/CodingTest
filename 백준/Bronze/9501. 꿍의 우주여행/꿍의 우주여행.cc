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
        int N, D;
        cin >> N >> D;

        int cnt = 0;
        for (int i = 0; i < N; i++)
        {
            int v, f, c;
            cin >> v >> f >> c;

            if (v * ((double)f / c) >= (double)D)
            {
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}