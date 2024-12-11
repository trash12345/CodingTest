#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        cout << (char)toupper(S[i]);
    }

    return 0;
}