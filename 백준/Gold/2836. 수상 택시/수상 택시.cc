#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<long long, long long>> V;

    long long N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        long long x, y;
        cin >> x >> y;

        if (x > y)
        {
            swap(x, y);
        }
        else
        {
            continue;
        }

        V.push_back({x, y});
    }

    sort(V.begin(), V.end());

    if (V.empty())
    {
        cout << M;
        return 0;
    }

    long long s = V[0].first, e = V[0].second;
    long long ans = 0;

    for (int i = 0; i < V.size(); i++)
    {
        if (e < V[i].first)
        {
            ans += e - s;
            s = V[i].first;
            e = V[i].second;
        }
        else if (e < V[i].second)
        {
            e = V[i].second;
        }
    }

    ans += e - s;

    cout << M + ans * 2;

    return 0;
}