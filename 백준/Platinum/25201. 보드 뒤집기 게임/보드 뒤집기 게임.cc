#include <bits/stdc++.h>

using namespace std;

bool row[100001], col[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    // 현 상태
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        row[x] ^= 1;
        col[y] ^= 1;
    }

    // 목표 상태
    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;

        row[x] ^= 1;
        col[y] ^= 1;
    }

    // 홀짝이 다른 경우 NO
    for (int i = 1; i <= 100000; i++)
    {
        if (row[i] || col[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}