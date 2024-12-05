#include <bits/stdc++.h>

using namespace std;

vector<int> V[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int> pq;

    for (int i = 0; i < N; i++)
    {
        int deadline, ramen;
        cin >> deadline >> ramen;

        V[deadline].push_back(ramen);
    }

    int ans = 0;

    for (int i = N; i >= 1; i--)
    {
        for (int j = 0; j < V[i].size(); j++)
            pq.push(V[i][j]);

        if (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans;

    return 0;
}