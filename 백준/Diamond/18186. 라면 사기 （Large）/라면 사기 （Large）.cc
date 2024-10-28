#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, B, C;
    cin >> N >> B >> C;

    long long cost = 0;
    long long sum = 0;

    vector<long long> V;

    for (long long i = 0; i < N; i++)
    {
        long long A;
        cin >> A;

        sum += A;

        V.push_back(A);
    }

    if (B <= C)
    {
        cout << sum * B;
        return 0;
    }

    for (long long i = 0; i < N; i++)
    {
        long long tmp;

        if (V[i + 1] > V[i + 2])
        {
            tmp = min(V[i], V[i + 1] - V[i + 2]);
            cost += (B + C) * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;

            tmp = min(V[i], min(V[i + 1], V[i + 2]));
            cost += (B + 2 * C) * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;
            V[i + 2] -= tmp;
        }
        else
        {
            tmp = min(V[i], min(V[i + 1], V[i + 2]));
            cost += (B + 2 * C) * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;
            V[i + 2] -= tmp;

            tmp = min(V[i], V[i + 1]);
            cost += (B + C) * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;
        }

        cost += B * V[i];
    }

    cout << cost;

    return 0;
}