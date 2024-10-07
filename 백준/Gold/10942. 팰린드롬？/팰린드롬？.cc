#include <bits/stdc++.h>

using namespace std;

// S부터 E까지의 팰린드롬 여부
bool dp[2001][2001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        cin >> V[i];
    }

    int M;
    cin >> M;

    for (int i = 1; i <= N; i++)
    {
        dp[i][i] = true;
    }

    for (int i = 1; i <= N - 1; i++)
    {
        if (V[i] == V[i + 1])
        {
            dp[i][i + 1] = true;
        }
    }

    // 길이 >= 3인 경우 팰린드롬 판정법
    // dp[left+1][right-1] + V[left] = V[right]
    for (int i = N - 2; i >= 1; i--)
    {
        for (int j = i + 2; j <= N; j++)
        {
            if (V[i] == V[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = true;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        int S, E;
        cin >> S >> E;

        cout << dp[S][E] << "\n";
    }

    return 0;
}