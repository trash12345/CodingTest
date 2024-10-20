#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> J;
vector<int> B;
priority_queue<int, vector<int>, less<int>> pq;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int M, V;
        cin >> M >> V;

        J.push_back({M, V});
    }

    for (int i = 0; i < K; i++)
    {
        int C;
        cin >> C;

        B.push_back(C);
    }

    sort(J.begin(), J.end());
    sort(B.begin(), B.end());

    long long ans = 0;
    int idx = 0;

    for (int i = 0; i < K; i++)
    {
        while (idx < N && J[idx].first <= B[i])
        {
            pq.push(J[idx++].second);
        }

        if (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans;

    return 0;
}