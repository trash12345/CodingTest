#include <bits/stdc++.h>

using namespace std;

int S1idx, S2idx;

void findindex(string S1, string S2)
{
    for (int i = 0; i < S1.size(); i++)
    {
        for (int j = 0; j < S2.size(); j++)
        {
            if (S1[i] == S2[j])
            {
                S1idx = i;
                S2idx = j;
                return;
            }
        }
    }

    return;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S1, S2;
    cin >> S1 >> S2;

    findindex(S1, S2);

    for (int i = 0; i < S2.size(); i++)
    {
        for (int j = 0; j < S1.size(); j++)
        {
            if (S2idx == i)
            {
                cout << S1[j];
            }
            else if (S1idx == j)
            {
                cout << S2[i];
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}