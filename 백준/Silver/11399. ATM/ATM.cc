#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;

    int N;
    int ans = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int time;
        cin >> time;
        V.push_back(time);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < N; i++)
    {
        ans += V[i] * (N - i);
    }

    cout << ans;

    return 0;
}