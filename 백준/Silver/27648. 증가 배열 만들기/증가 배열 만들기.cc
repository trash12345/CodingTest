#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, K;
    cin >> N >> M >> K;

    if (K < M + N - 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES\n";

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout << i + j + 1 << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}