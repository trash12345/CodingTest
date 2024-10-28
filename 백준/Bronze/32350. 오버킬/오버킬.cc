#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, D, p;
    cin >> N >> D >> p;

    vector<int> V;

    for (int i = 0; i < N; i++)
    {
        int h;
        cin >> h;

        V.push_back(h);
    }

    int cnt = 0;
    int idx = 0;

    while (idx < N)
    {
        if (V[idx] > 0)
        {
            V[idx] -= D;
            cnt++;

            if (V[idx] < 0)
            {
                V[idx + 1] -= abs(V[idx]) * p / 100;
            }
        }

        if (V[idx] <= 0)
        {
            idx++;
        }
    }

    cout << cnt;

    return 0;
}