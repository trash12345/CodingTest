#include <bits/stdc++.h>

using namespace std;

long long fac[4000001];

long long N, K;

const long long mod = 1e9 + 7;

long long pow(long long a, long long b)
{
    long long ans = 1;

    while (b)
    {
        if (b % 2 == 1)
        {
            ans = ((ans % mod) * (a % mod)) % mod;
        }

        a = ((a % mod) * (a % mod)) % mod;
        b /= 2;
    }

    return ans;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M;
    cin >> M;

    fac[0] = 1;

    for (int i = 1; i <= 4000000; i++)
    {
        fac[i] = ((fac[i - 1] % mod) * (i % mod)) % mod;
    }

    while (M--)
    {
        cin >> N >> K;

        cout << ((fac[N] % mod) * (pow(((fac[K] % mod) * (fac[N - K] % mod)) % mod, mod - 2) % mod)) % mod << "\n";
    }

    return 0;
}