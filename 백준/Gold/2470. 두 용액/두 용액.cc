#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        V.push_back(num);
    }

    sort(V.begin(), V.end());

    int s = 0, e = N - 1;
    int val1 = V[0], val2 = V[N - 1];
    int mn = INT_MAX;

    while (s < e)
    {
        int dif = V[s] + V[e];

        if (mn > abs(dif))
        {
            mn = abs(dif);
            val1 = V[s];
            val2 = V[e];
        }

        if (dif > 0)
        {
            e--;
        }
        else if (dif < 0)
        {
            s++;
        }
        else
        {
            cout << V[s] << " " << V[e];
            return 0;
        }
    }

    cout << val1 << " " << val2;

    return 0;
}