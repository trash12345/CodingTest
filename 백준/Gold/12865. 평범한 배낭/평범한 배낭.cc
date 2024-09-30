#include <bits/stdc++.h>

using namespace std;

// N 개가 담겼을 때의 무게 K -> 가치
int dp[101][100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> bag;

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int W, V;
        cin >> W >> V;
        bag.push_back({W, V});
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            if (j - bag[i - 1].first < 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - bag[i - 1].first] + bag[i - 1].second);
            }
        }
    }

    cout << dp[N][K];

    return 0;
}