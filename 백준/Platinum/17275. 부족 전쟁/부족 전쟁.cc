#include <bits/stdc++.h>

using namespace std;

int alliance[5001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        int sum = 0;

        fill(alliance, alliance + 5001, 0);

        for (int i = 0; i < M; i++)
        {
            int x, y;
            cin >> x >> y;

            alliance[x]++;
            alliance[y]++;
        }

        for (int i = 1; i <= N; i++)
        {
            sum += alliance[i] * (N - 1 - alliance[i]);
        }

        cout << N * (N - 1) * (N - 2) / 6 - sum / 2 << "\n";
    }

    return 0;
}