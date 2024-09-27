#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<long long> V(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end(), greater<>());

    long long ans = 0;

    for (int i = 0; i < N; i++)
    {
        if (V[i] - i > 0)
        {
            ans += V[i] - i;
        }
    }

    cout << ans;

    return 0;
}