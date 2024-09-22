#include <bits/stdc++.h>

using namespace std;

bool vis[26];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    int K;
    cin >> S >> K;

    for (int i = 0; i < S.size(); i++)
    {
        S[i] = toupper(S[i]);
    }
    S += " ";

    char tmp = S[0];
    int cnt = 1;
    string ans = "";

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == tmp)
        {
            cnt++;
        }
        else
        {
            if (!vis[tmp - 'A'])
            {
                if (cnt >= K)
                {
                    ans += "1";
                }
                else
                {
                    ans += "0";
                }
                vis[tmp - 'A'] = true;
            }

            tmp = S[i];
            cnt = 1;
        }
    }

    cout << ans;

    return 0;
}