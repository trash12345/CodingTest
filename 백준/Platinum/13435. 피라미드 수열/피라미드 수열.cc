#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : a;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, M;
    cin >> N >> M;

    if (N == 1 || M == 1)
    {
        cout << N * M;
        return 0;
    }

    long long G = gcd(N - 1, M - 1);

    N = (N - 1) / G;
    M = (M - 1) / G;

    cout << (N + 1) * (M + 1) / 2 + N * M * (G - 1);

    return 0;
}