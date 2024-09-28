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

    int N;
    cin >> N;

    vector<int> V;

    for (int i = 0; i < N; i++)
    {
        int num;
        int tmp;
        cin >> num;

        if (i >= 1)
        {
            V.push_back(abs(tmp - num));
        }

        tmp = num;
    }

    int ans = INT_MAX;

    for (int i = 0; i < N - 1; i++)
    {
        int res = gcd(V[i], V[i + 1]);

        ans = min(ans, gcd(V[i + 1], res));
    }

    if (ans == INT_MAX)
    {
        cout << 1;
        return 0;
    }

    for (int i = 2; i <= ans; i++)
    {
        if (ans % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}