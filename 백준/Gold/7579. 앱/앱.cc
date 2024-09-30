#include <bits/stdc++.h>

using namespace std;

// 비활성 앱 개수 / 비용 -> 아낄 수 있는 최대 메모리
int dp[101][10001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int sum = 0;
    cin >> N >> M;

    vector<int> m(N), c(N);

    for (int i = 0; i < N; i++)
    {
        cin >> m[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> c[i];
        sum += c[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (j - c[i - 1] < 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - c[i - 1]] + m[i - 1]);
            }
        }
    }

    for (int i = 0; i <= sum; i++)
    {
        if (dp[N][i] >= M)
        {
            cout << i;
            break;
        }
    }

    return 0;
}