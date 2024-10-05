#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    long long ans = 0;
    cin >> N;

    vector<int> V(N, 0);
    stack<pair<int, long long>> S;

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < N; i++)
    {
        long long cnt = 1;

        while (!S.empty() && S.top().first <= V[i])
        {
            ans += S.top().second;

            if (S.top().first == V[i])
            {
                cnt += S.top().second;
            }

            S.pop();
        }

        if (!S.empty())
        {
            ans++;
        }

        S.push({V[i], cnt});
    }

    cout << ans;

    return 0;
}