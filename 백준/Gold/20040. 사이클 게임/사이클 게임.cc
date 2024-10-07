#include <bits/stdc++.h>

using namespace std;

int parent[500001];

int find(int x)
{
    if (parent[x] == x)
    {
        return x;
    }
    return parent[x] = find(parent[x]);
}

void uni(int x, int y)
{
    x = find(x);
    y = find(y);

    parent[x] = y;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int ans = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        parent[i] = i;
    }

    for (int i = 1; i <= M; i++)
    {
        int a, b;
        cin >> a >> b;

        if (find(a) == find(b))
        {
            ans = i;
            break;
        }

        uni(a, b);
    }

    cout << ans;

    return 0;
}