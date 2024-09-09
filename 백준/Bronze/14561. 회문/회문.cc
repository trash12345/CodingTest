#include <bits/stdc++.h>

using namespace std;

bool isPalin(string S)
{
    for (int i = 0; i < S.size() / 2; i++)
    {
        if (S[i] != S[S.size() - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        long long A, n;
        cin >> A >> n;

        string ans = "";

        while (A)
        {
            if (A % n >= 10)
            {
                ans += char(A % n + 'A' - 10);
            }
            else
            {
                ans += to_string(A % n);
            }

            A /= n;
        }

        if (isPalin(ans))
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}