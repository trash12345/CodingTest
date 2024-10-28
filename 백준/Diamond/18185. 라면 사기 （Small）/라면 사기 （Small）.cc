#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cost = 0;

    vector<int> V;

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        V.push_back(A);
    }

    for (int i = 0; i < N; i++)
    {
        int tmp;

        if (V[i + 1] > V[i + 2])
        {
            tmp = min(V[i], V[i + 1] - V[i + 2]);
            cost += 5 * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;

            tmp = min(V[i], min(V[i + 1], V[i + 2]));
            cost += 7 * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;
            V[i + 2] -= tmp;
        }
        else
        {
            tmp = min(V[i], min(V[i + 1], V[i + 2]));
            cost += 7 * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;
            V[i + 2] -= tmp;

            tmp = min(V[i], V[i + 1]);
            cost += 5 * tmp;

            V[i] -= tmp;
            V[i + 1] -= tmp;
        }

        cost += 3 * V[i];
    }

    cout << cost;

    return 0;
}