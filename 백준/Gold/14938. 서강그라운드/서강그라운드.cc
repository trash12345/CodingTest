#include <bits/stdc++.h>

using namespace std;

int graph[101][101];
int item[31];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int INF = 1e9;

    int n, m, r;
    cin >> n >> m >> r;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            graph[i][j] = INF;
        }
        graph[i][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> item[i];
    }

    for (int i = 0; i < r; i++)
    {
        int a, b, l;
        cin >> a >> b >> l;

        graph[a][b] = min(graph[a][b], l);
        graph[b][a] = min(graph[b][a], l);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    int ans = -1;

    for (int i = 1; i <= n; i++)
    {
        int sum = item[i];

        for (int j = 1; j <= n; j++)
        {
            if (graph[i][j] <= m && i != j)
            {
                sum += item[j];
            }
        }

        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}