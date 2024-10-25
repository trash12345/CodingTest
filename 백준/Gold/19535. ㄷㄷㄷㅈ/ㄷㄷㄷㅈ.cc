#include <bits/stdc++.h>

using namespace std;

vector<int> tree[300001];

int N;

void input()
{
    for (int i = 0; i < N - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }
}

void solve()
{
    long long D = 0, G = 0;

    for (int i = 1; i <= N; i++)
    {
        G += 1LL * tree[i].size() * (tree[i].size() - 1) * (tree[i].size() - 2) / 6;

        for (int j = 0; j < tree[i].size(); j++)
        {
            D += 1LL * (tree[i].size() - 1) * (tree[tree[i][j]].size() - 1);
        }
    }

    D /= 2;

    if (D == G * 3)
    {
        cout << "DUDUDUNGA\n";
    }
    else if (D > G * 3)
    {
        cout << "D\n";
    }
    else
    {
        cout << "G\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    input();
    solve();

    return 0;
}