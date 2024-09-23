#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> V;
    vector<int> res(N, 0);
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < K; i++)
    {
        int c;
        cin >> c;

        if (c > (N + 1) / 2)
        {
            cout << -1;
            return 0;
        }

        V.push_back({c, i + 1});
    }

    sort(V.begin(), V.end());

    // 반 끼워넣고 나머지는 아무렇게
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].first; j++)
        {
            pq.push(V[i].second);
        }
    }

    for (int i = 0; i < (N + 1) / 2; i++)
    {
        res[i * 2] = pq.top();
        pq.pop();
    }

    int len = pq.size();

    for (int i = 1; i <= len; i++)
    {
        res[i * 2 - 1] = pq.top();
        pq.pop();

        if (pq.empty())
        {
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}