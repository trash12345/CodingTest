#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> V, D;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }

    for (int i = 0; i < M; i++)
    {
        int dice;
        cin >> dice;
        D.push_back(dice);
    }

    int cur = 1;
    int cnt = 0;

    for (int i = 0; i < M; i++)
    {
        cnt++;
        cur += D[i];
        cur += V[cur - 1];
        if (cur >= N)
        {
            cout << cnt;
            return 0;
        }
    }

    return 0;
}