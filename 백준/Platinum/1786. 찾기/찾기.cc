#include <bits/stdc++.h>

using namespace std;

vector<int> pi;
vector<int> ans;

void getPi(string S)
{
    pi.resize(S.size());
    int j = 0;

    for (int i = 1; i < S.size(); i++)
    {
        while (j && S[i] != S[j])
        {
            j = pi[j - 1];
        }

        if (S[i] == S[j])
        {
            pi[i] = ++j;
        }
    }
}

void KMP(string S, string P)
{
    int j = 0;

    for (int i = 0; i < S.size(); i++)
    {
        while (j && S[i] != P[j])
        {
            j = pi[j - 1];
        }

        if (S[i] == P[j])
        {
            if (j == P.size() - 1)
            {
                ans.push_back(i - j + 1);
                j = pi[j];
            }
            else
            {
                j++;
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S, P;
    getline(cin, S);
    getline(cin, P);

    getPi(P);
    KMP(S, P);

    cout << ans.size() << "\n";

    for (auto i : ans)
    {
        cout << i << "\n";
    }

    return 0;
}