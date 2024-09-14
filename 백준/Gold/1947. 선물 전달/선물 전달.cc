#include <bits/stdc++.h>

using namespace std;

long long dp[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const long long mod = 1000000000;

    int N;
    cin >> N;

    dp[2] = 1;
    dp[3] = 2;

    // 새로 온 사람과 한 명이 각자 교환
    // 새로 온 사람이 받은 다른 선물을 교환
    for (int i = 4; i <= N; i++)
    {
        dp[i] = (dp[i - 1] % mod + dp[i - 2] % mod) * (i - 1);
        dp[i] %= mod;
    }

    cout << dp[N];

    return 0;
}