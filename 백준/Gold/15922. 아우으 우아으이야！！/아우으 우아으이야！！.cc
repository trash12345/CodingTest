#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> V;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        V.push_back({x, y});
    }

    int s = V[0].first, e = V[0].second;
    int ans = 0;

    for (int i = 0; i < N; i++)
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

    cout << ans;

    return 0;
}