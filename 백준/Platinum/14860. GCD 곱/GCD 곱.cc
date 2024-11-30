#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
bool prime[15000001];

long long custom_pow(long long x, long long y)
{
    long long ret = 1;

    while (y)
    {
        if (y & 1)
        {
            ret = (ret * x) % MOD;
        }
        x = (x * x) % MOD;
        y /= 2;
    }

    return ret;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, M;
    cin >> N >> M;

    long long ans = 1;

    for (long long i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            continue;
        }

        for (long long j = i * i; j <= N; j += i)
        {
            prime[j] = true;
        }

        for (long long k = i; k <= N; k *= i)
        {
            long long cnt = (N / k) * (M / k);

            ans = (ans * custom_pow(i, cnt)) % MOD;
        }
    }

    cout << ans;

    return 0;
}