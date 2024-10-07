#include <bits/stdc++.h>

using namespace std;

vector<int> V[32001];
int deg[32001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;

        V[A].push_back(B);
        deg[B]++;
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= N; i++)
    {
        if (deg[i] == 0)
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        auto cur = pq.top();
        pq.pop();

        cout << cur << " ";

        for (int nxt : V[cur])
        {
            deg[nxt]--;

            if (deg[nxt] == 0)
            {
                pq.push(nxt);
            }
        }
    }

    return 0;
}