#include <bits/stdc++.h>

using namespace std;

int L, C;

bool alphabet[26];
int tmp;

bool isValid(string S)
{
    int cnt = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            cnt++;
        }
    }

    if (cnt >= 1 && S.size() - cnt >= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dfs(string S)
{
    if (S.size() == L)
    {
        if (isValid(S))
        {
            tmp = 0;
            cout << S << "\n";
            return;
        }
    }

    for (int i = tmp; i < 26; i++)
    {
        if (!alphabet[i])
        {
            alphabet[i] = true;

            char c = i + 'a';
            string nxt = S + c;
            tmp = i;

            dfs(nxt);

            alphabet[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> L >> C;

    fill(alphabet, alphabet + 26, true);

    for (int i = 0; i < C; i++)
    {
        char alpha;
        cin >> alpha;
        alphabet[alpha - 'a'] = false;
    }

    dfs("");

    return 0;
}