#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;

    string ans = "";

    if (S[0] == 'E')
    {
        ans += 'I';
    }
    else
    {
        ans += 'E';
    }

    if (S[1] == 'S')
    {
        ans += 'N';
    }
    else
    {
        ans += 'S';
    }

    if (S[2] == 'T')
    {
        ans += 'F';
    }
    else
    {
        ans += 'T';
    }

    if (S[3] == 'J')
    {
        ans += 'P';
    }
    else
    {
        ans += 'J';
    }

    cout << ans;

    return 0;
}