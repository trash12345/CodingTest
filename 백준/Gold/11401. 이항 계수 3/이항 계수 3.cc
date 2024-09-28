#include <bits/stdc++.h>

using namespace std;

const long long mod = 1000000007;

long long customPow(long long x, long long y)
{
    if (y == 1)
    {
        return x % mod;
    }

    long long tmp = customPow(x, y / 2);

    return y % 2 ? (tmp * tmp % mod) * x % mod : tmp * tmp % mod;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    // 구하려는 해
    // (n * (n-1) ... * (n-k+1)) % mod * k!^(p-2) % mod

    long long x = 1;

    for (int i = N; i >= N - K + 1; i--)
    {
        x = (x * i) % mod;
    }

    long long y = 1;

    for (int i = 1; i <= K; i++)
    {
        y = (y * i) % mod;
    }

    cout << (x * customPow(y, mod - 2)) % mod;

    return 0;
}