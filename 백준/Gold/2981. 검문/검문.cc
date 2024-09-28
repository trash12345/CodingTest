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

    vector<int> V(N);
    set<int> div;

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    int res = V[1] - V[0];

    for (int i = 2; i < N; i++)
    {
        res = gcd(res, V[i] - V[i - 1]);
    }

    for (int i = 1; i * i <= res; i++)
    {
        if (res % i == 0)
        {
            div.insert(i);
            div.insert(res / i);
        }
    }

    for (auto i : div)
    {
        if (i != 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}