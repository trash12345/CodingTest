#include <bits/stdc++.h>

using namespace std;

int ans[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V(N, -1);
    stack<int> S;
    fill(ans, ans + N, -1);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < N; i++)
    {
        while (!S.empty() && V[S.top()] < V[i])
        {
            ans[S.top()] = V[i];
            S.pop();
        }

        S.push(i);
    }

    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}