#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> mp;

    int N;
    int ans = 0;
    string title = "";
    cin >> N;

    while (N--)
    {
        string S;
        cin >> S;

        mp[S]++;
    }

    for (auto i : mp)
    {
        if (i.second > ans)
        {
            ans = i.second;
            title = i.first;
        }
    }

    cout << title;

    return 0;
}