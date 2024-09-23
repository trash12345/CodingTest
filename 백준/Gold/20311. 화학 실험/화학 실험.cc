#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> res(N + 1, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> pq;

    for (int i = 1; i <= K; i++)
    {
        int c;
        cin >> c;

        if (c > (N + 1) / 2)
        {
            cout << -1;
            return 0;
        }

        for (int j = 0; j < c; j++)
        {
            pq.push({c, i});
        }
    }

    // 짝수
    for (int i = 0; i < (N + 1) / 2; i++)
    {
        res[i * 2] = pq.top().second;
        pq.pop();
    }

    int len = pq.size();

    // 홀수
    for (int i = 1; i <= len; i++)
    {
        res[i * 2 - 1] = pq.top().second;
        pq.pop();
    }

    for (int i = 0; i < N; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}