#include <bits/stdc++.h>

using namespace std;

const int mod = 10000003;

int gcd(int a, int b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}

int dp[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    for (auto i : V)
    {
        for (int j = 1; j <= 100000; j++)
        {
            dp[gcd(i, j)] = (dp[gcd(i, j)] + dp[j]) % mod;
        }
        dp[i] = (dp[i] + 1) % mod;
    }

    cout << dp[1] % mod;

    return 0;
}