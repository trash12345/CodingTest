#include <bits/stdc++.h>

using namespace std;

// 왼발의 위치 오른발의 위치 단계
int dp[5][5][100001];

vector<int> V;

// a에서 b로 갈 때 드는 비용
int cost(int a, int b)
{
    if (a == 0)
    {
        return 2;
    }
    else if (a == b)
    {
        return 1;
    }
    else if (abs(a - b) == 2)
    {
        return 4;
    }
    else
    {
        return 3;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int INF = 2e9;

    for (int left = 0; left < 5; left++)
    {
        for (int right = 0; right < 5; right++)
        {
            fill(dp[left][right], dp[left][right] + 100001, INF);
        }
    }

    dp[0][0][0] = 0;

    while (1)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            break;
        }

        V.push_back(cmd);
    }

    for (int i = 0; i < V.size(); i++)
    {
        for (int left = 0; left < 5; left++)
        {
            for (int right = 0; right < 5; right++)
            {
                dp[V[i]][right][i + 1] = min(dp[V[i]][right][i + 1], dp[left][right][i] + cost(left, V[i]));
                dp[left][V[i]][i + 1] = min(dp[left][V[i]][i + 1], dp[left][right][i] + cost(right, V[i]));
            }
        }
    }

    int ans = INT_MAX;

    for (int left = 0; left < 5; left++)
    {
        for (int right = 0; right < 5; right++)
        {
            ans = min(ans, dp[left][right][V.size()]);
        }
    }

    cout << ans;

    return 0;
}