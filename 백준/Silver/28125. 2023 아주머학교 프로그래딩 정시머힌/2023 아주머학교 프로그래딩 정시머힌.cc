#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    while (N--)
    {
        int cnt = 0;
        string S;
        string ans = "";
        cin >> S;

        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '@')
            {
                ans += 'a';
                cnt++;
            }
            else if (S[i] == '[')
            {
                ans += 'c';
                cnt++;
            }
            else if (S[i] == '!')
            {
                ans += 'i';
                cnt++;
            }
            else if (S[i] == ';')
            {
                ans += 'j';
                cnt++;
            }
            else if (S[i] == '^')
            {
                ans += 'n';
                cnt++;
            }
            else if (S[i] == '0')
            {
                ans += 'o';
                cnt++;
            }
            else if (S[i] == '7')
            {
                ans += 't';
                cnt++;
            }
            else if (S[i] == '\\')
            {
                if (S[i + 1] == '\'')
                {
                    ans += 'v';
                    cnt++;
                    i++;
                }
                else if (S[i + 1] == '\\' && S[i + 2] == '\'')
                {
                    ans += 'w';
                    cnt++;
                    i += 2;
                }
            }
            else
            {
                ans += S[i];
            }
        }

        if (ans.size() > cnt * 2)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << "I don't understand\n";
        }
    }

    return 0;
}