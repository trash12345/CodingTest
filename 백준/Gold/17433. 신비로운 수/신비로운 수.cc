#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int cnt = 0;
        cin >> N;

        vector<int> V(N), dif;

        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }

        sort(V.begin(), V.end());

        for (int i = 1; i < N; i++)
        {
            dif.push_back(V[i] - V[i - 1]);
        }

        int ans = dif[0];

        for (int i = 1; i < dif.size(); i++)
        {
            ans = gcd(ans, dif[i]);
        }

        if (ans == 0)
        {
            cout << "INFINITY\n";
            continue;
        }

        cout << ans << "\n";
    }

    return 0;
}