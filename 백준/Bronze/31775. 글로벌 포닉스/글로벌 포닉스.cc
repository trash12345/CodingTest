#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> V;

    for (int i = 0; i < 3; i++)
    {
        string S;
        cin >> S;
        V.push_back(S);
    }

    sort(V.begin(), V.end());

    if (V[0][0] == 'k' && V[1][0] == 'l' && V[2][0] == 'p')
    {
        cout << "GLOBAL";
    }
    else
    {
        cout << "PONIX";
    }

    return 0;
}