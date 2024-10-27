#include <bits/stdc++.h>

using namespace std;

long long fibo[91];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    long long cmp = N;

    fibo[1] = 1;
    fibo[2] = 1;

    for (int i = 3; i <= 90; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    for (int i = 90; i >= 1; i--)
    {
        if (fibo[i] == N)
        {
            break;
        }

        if (N > fibo[i])
        {
            N -= fibo[i];
        }
    }

    cout << (N == cmp ? -1 : N);

    return 0;
}