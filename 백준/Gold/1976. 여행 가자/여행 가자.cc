#include <bits/stdc++.h>

using namespace std;

int parent[200001];

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

    int N;
    cin >> N;
    int M;
    cin >> M;

    for (int i = 0; i <= N * M; i++)
    {
        parent[i] = i;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int num;
            cin >> num;

            if (num == 1)
            {
                uni(i, j);
            }
        }
    }

    int prev;
    cin >> prev;

    for (int i = 0; i < M - 1; i++)
    {
        int nxt;
        cin >> nxt;

        if (find(prev) != find(nxt))
        {
            cout << "NO";
            return 0;
        }
        prev = nxt;
    }

    cout << "YES";

    return 0;
}