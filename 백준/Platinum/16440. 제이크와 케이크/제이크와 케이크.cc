#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    string S;
    cin >> S;

    int cnt = 0;

    for (int i = 0; i < N / 2; i++)
    {
        if (S[i] == 's')
        {
            cnt++;
        }
    }

    if (cnt == N / 4)
    {
        cout << "1\n"
             << N / 2;

        return 0;
    }

    for (int i = 0; i < N / 2; i++)
    {
        if (S[i] == 's')
        {
            cnt--;
        }

        if (S[i + N / 2] == 's')
        {
            cnt++;
        }

        if (cnt == N / 4)
        {
            cout << "2\n"
                 << i + 1 << " " << i + N / 2 + 1;

            return 0;
        }
    }

    return 0;
}