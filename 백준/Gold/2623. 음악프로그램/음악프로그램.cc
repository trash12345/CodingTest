#include <bits/stdc++.h>

using namespace std;

vector<int> V[1001];
int deg[1001];
vector<int> ans;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int K;
        cin >> K;

        int prev;
        cin >> prev;

        for (int i = 1; i < K; i++)
        {
            int nxt;
            cin >> nxt;
            V[prev].push_back(nxt);
            deg[nxt]++;
            prev = nxt;
        }
    }

    queue<int> Q;

    for (int i = 1; i <= N; i++)
    {
        if (deg[i] == 0)
        {
            Q.push(i);
        }
    }

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        ans.push_back(cur);

        for (auto nxt : V[cur])
        {
            deg[nxt]--;

            if (deg[nxt] == 0)
            {
                Q.push(nxt);
            }
        }
    }

    if (ans.size() == N)
    {
        for (auto i : ans)
        {
            cout << i << "\n";
        }
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}