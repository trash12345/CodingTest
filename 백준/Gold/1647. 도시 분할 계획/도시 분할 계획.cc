#include <bits/stdc++.h>

using namespace std;

vector<pair<int, pair<int, int>>> edges;

int parent[100001];

int findParent(int x)
{
    if (parent[x] == x)
    {
        return x;
    }
    return parent[x] = findParent(parent[x]);
}

void uni(int x, int y)
{
    x = findParent(x);
    y = findParent(y);

    parent[y] = x;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int V, E;
    cin >> V >> E;

    for (int i = 0; i < E; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;

        edges.push_back({C, {A, B}});
        edges.push_back({C, {B, A}});
    }

    for (int i = 0; i < 100001; i++)
    {
        parent[i] = i;
    }

    sort(edges.begin(), edges.end());

    int sum = 0;
    int mx = INT_MIN;

    for (int i = 0; i < edges.size(); i++)
    {
        int cost = edges[i].first;
        int cur = edges[i].second.first;
        int nxt = edges[i].second.second;

        if (findParent(cur) == findParent(nxt))
        {
            continue;
        }

        uni(cur, nxt);
        sum += cost;
        mx = max(mx, cost);
    }

    cout << sum - mx;

    return 0;
}