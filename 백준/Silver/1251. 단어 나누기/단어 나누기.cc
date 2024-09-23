#include <bits/stdc++.h>

using namespace std;

vector<string> V;

void sol(string S, int one, int two)
{
    string S1 = "", S2 = "", S3 = "";

    for (int i = 0; i < one; i++)
    {
        S1 += S[i];
    }
    for (int i = one; i < two; i++)
    {
        S2 += S[i];
    }
    for (int i = two; i < S.size(); i++)
    {
        S3 += S[i];
    }

    // cout << "S1 = " << S1 << "\n";
    // cout << "S2 = " << S2 << "\n";
    // cout << "S3 = " << S3 << "\n";

    reverse(S1.begin(), S1.end());
    reverse(S2.begin(), S2.end());
    reverse(S3.begin(), S3.end());

    string newS = S1 + S2 + S3;

    V.push_back(newS);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;

    for (int i = 1; i < S.size() - 1; i++)
    {
        for (int j = i + 1; j < S.size(); j++)
        {
            if (i >= j)
            {
                continue;
            }
            sol(S, i, j);
        }
    }

    sort(V.begin(), V.end());

    cout << V[0];

    return 0;
}