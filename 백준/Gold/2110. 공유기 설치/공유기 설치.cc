#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, C;
    cin >> N >> C;

    int ans = 0;

    vector<int> V;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        V.push_back(x);
    }

    sort(V.begin(), V.end());

    int s = 1, e = V[N - 1] - V[0];

    while (s <= e)
    {
        int mid = (s + e) / 2;
        int cnt = 1;
        int pos = V[0];

        for (int i = 1; i < N; i++)
        {
            if (V[i] - pos >= mid)
            {
                cnt++;
                pos = V[i];
            }
        }

        if (cnt >= C)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans;

    return 0;
}