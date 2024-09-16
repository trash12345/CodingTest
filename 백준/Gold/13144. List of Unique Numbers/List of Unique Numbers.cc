#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V;
    vector<bool> vis(N, false);

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        V.push_back(num);
    }

    int s = 0, e = 0;
    long long ans = 0;

    while (s < N)
    {
        while (e < N)
        {
            if (vis[V[e]])
            {
                break;
            }
            vis[V[e++]] = true;
        }
        ans += e - s;
        vis[V[s++]] = false;
    }

    cout << ans;

    return 0;
}