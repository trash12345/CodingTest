#include <bits/stdc++.h>

using namespace std;

int A[1001], B[1001];

vector<int> edges[1001];
bool vis[1001];

bool dfs(int x)
{
    vis[x] = true;

    for (auto i : edges[x])
    {
        if (B[i] == -1 || !vis[B[i]] && dfs(B[i]))
        {
            A[x] = i;
            B[i] = x;
            return true;
        }
    }

    return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        int K;
        cin >> K;

        for (int j = 0; j < K; j++)
        {
            int val;
            cin >> val;

            edges[i].push_back(val);
        }
    }

    int ans = 0;

    fill(A, A + 1001, -1);
    fill(B, B + 1001, -1);

    for (int i = 1; i <= N; i++)
    {
        if (A[i] == -1)
        {
            for (int j = 0; j < 2; j++)
            {
                fill(vis, vis + 1001, false);

                if (dfs(i))
                {
                    ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}