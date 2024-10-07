#include <bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string A, B;
    string ans = "";
    cin >> A >> B;

    for (int i = 1; i <= A.size(); i++)
    {
        for (int j = 1; j <= B.size(); j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[A.size()][B.size()] << "\n";

    int i = A.size(), j = B.size();

    while (dp[i][j])
    {
        if (dp[i][j] == dp[i][j - 1])
        {
            j--;
        }
        else if (dp[i][j] == dp[i - 1][j])
        {
            i--;
        }
        else if (dp[i][j] != dp[i - 1][j] && dp[i][j] != dp[i][j - 1])
        {
            ans += A[i - 1];
            i--;
            j--;
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }

    return 0;
}