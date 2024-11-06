#include <bits/stdc++.h>

using namespace std;

int P[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            break;
        }

        int grundy = 0;
        int cnt = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> P[i];

            grundy ^= P[i];
        }

        for (int i = 0; i < N; i++)
        {
            int tmp = P[i] ^ grundy;

            if (tmp < P[i])
            {
                cnt++;
            }
        }

        cout << (grundy == 0 ? 0 : cnt) << "\n";
    }

    return 0;
}