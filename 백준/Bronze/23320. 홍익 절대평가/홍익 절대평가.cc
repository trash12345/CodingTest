#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cnt = 0;

    vector<int> V(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    int X, Y;
    cin >> X >> Y;

    for (int i = 0; i < N; i++)
    {
        if (V[i] >= Y)
        {
            cnt++;
        }
    }

    cout << V.size() * X / 100 << " " << cnt;

    return 0;
}