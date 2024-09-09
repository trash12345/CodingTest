#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;

    int N, K;
    int cnt = 0;
    int ans = -1;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        V.push_back(A);
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (V[i] >= V[i + 1])
        {
            V[i + 1] += K;
            cnt++;
        }
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (V[i] >= V[i + 1])
        {
            cout << -1;
            return 0;
        }
    }

    cout << cnt;

    return 0;
}