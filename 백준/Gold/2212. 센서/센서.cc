#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int K;
    cin >> N;
    cin >> K;

    vector<int> V(N, 0), dist(N - 1, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    int sum = 0;

    for (int i = 0; i < N - 1; i++)
    {
        dist[i] = (V[i + 1] - V[i]);
        sum += dist[i];
    }

    if (N < K)
    {
        cout << sum;
        return 0;
    }

    sort(dist.begin(), dist.end(), greater<>());

    for (int i = 0; i < K - 1; i++)
    {
        sum -= dist[i];
    }

    cout << sum;

    return 0;
}