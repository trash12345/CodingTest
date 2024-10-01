#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string S)
{
    for (int i = 0; i < S.size() / 2; i++)
    {
        if (S[i] != S[S.size() - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    bool same = false;
    int cnt[26] = {
        0,
    };
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        cnt[S[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == S.size())
        {
            same = true;
        }
    }

    if (!isPalindrome(S))
    {
        cout << S.size();
    }
    else if (isPalindrome(S) && same)
    {
        cout << -1;
    }
    else if (isPalindrome(S) && !same)
    {
        cout << S.size() - 1;
    }

    return 0;
}