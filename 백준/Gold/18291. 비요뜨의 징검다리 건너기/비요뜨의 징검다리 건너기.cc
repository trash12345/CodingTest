#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long customPow(int num, int N)
{
    if (N == 0)
    {
        return 1;
    }

    long long tmp = customPow(num, N / 2) % mod;

    if (N % 2 == 0)
    {
        return tmp * tmp % mod;
    }
    else
    {
        return tmp * tmp * num % mod;
    }
}

// N번째 다리의 경우 pow(2, N-2) 가지의 경우의 수
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N == 1 || N == 2)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << customPow(2, N - 2) << "\n";
        }
    }

    return 0;
}