#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        int h;
        cin >> h;
        V.push_back(h);
        sum += h;
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - V[i] - V[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k == i || k == j)
                    {
                        continue;
                    }
                    else
                    {
                        cout << V[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}