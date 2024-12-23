#include <bits/stdc++.h>

using namespace std;

long long dp[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, D;
    cin >> N >> D;

    long long mx = -2e9;

    vector<long long> V;
    deque<pair<long long, long long>> dq;

    for (long long i = 0; i < N; i++)
    {
        long long K;
        cin >> K;

        mx = max(mx, K);

        V.push_back(K);
    }

    long long ans = mx;

    for (long long i = 0; i < N; i++)
    {
        dp[i] = V[i];

        while (!dq.empty() && dq.front().first < i - D)
        {
            dq.pop_front();
        }

        if (!dq.empty())
        {
            dp[i] = max(dp[i], dq.front().second + V[i]);
        }

        while (!dq.empty() && dq.back().second < dp[i])
        {
            dq.pop_back();
        }

        dq.push_back({i, dp[i]});
    }

    for (long long i = 0; i < N; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}