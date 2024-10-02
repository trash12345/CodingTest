#include <bits/stdc++.h>

using namespace std;

int parent[1001];
int N, M;

// 최소 스패닝 트리, 최대 스패닝 트리
vector<pair<int, pair<int, int>>> V;

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

    parent[x] = y;
}

int kruskal()
{
    for (int i = 0; i <= N; i++)
    {
        parent[i] = i;
    }

    int cnt = 0;
    int ret = 0;

    for (int i = 0; i < V.size(); i++)
    {
        int cur = V[i].second.first;
        int nxt = V[i].second.second;

        if (findParent(cur) == findParent(nxt))
        {
            continue;
        }

        ret++;
        uni(cur, nxt);

        if (V[i].first == 0)
        {
            cnt++;
        }

        if (ret == N)
        {
            break;
        }
    }

    int val = cnt * cnt;

    return val;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i <= M; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;

        V.push_back({C, {A, B}});
    }

    sort(V.begin(), V.end());
    int max = kruskal();

    sort(V.rbegin(), V.rend());
    int min = kruskal();

    cout << max - min;

    return 0;
}