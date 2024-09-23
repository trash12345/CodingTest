#include <bits/stdc++.h>

using namespace std;

bool isSlump(string S)
{
    return regex_match(S, regex("([DE]F+)+G$"));
}

bool isSlimp(string S)
{
    if (S == "AH")
    {
        return true;
    }
    if (S[0] == 'A' && S[S.size() - 1] == 'C' && isSlump(S.substr(1, S.size() - 2)))
    {
        return true;
    }
    if (S[0] == 'A' && S[1] == 'B' && S[S.size() - 1] == 'C' && isSlimp(S.substr(2, S.size() - 3)))
    {
        return true;
    }
    return false;
}

bool isSlurpy(string S)
{
    int slice = 0;
    while (1)
    {
        int idx = min(S.find('H', slice + 1), S.find('C', slice + 1));

        if (idx == string::npos)
        {
            break;
        }

        if (isSlimp(S.substr(0, idx + 1)) && isSlump(S.substr(idx + 1)))
        {
            return true;
        }

        slice = idx;
    }
    return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    cout << "SLURPYS OUTPUT\n";
    while (T--)
    {
        string S;
        cin >> S;

        cout << (isSlurpy(S) ? "YES\n" : "NO\n");
    }
    cout << "END OF OUTPUT\n";

    return 0;
}