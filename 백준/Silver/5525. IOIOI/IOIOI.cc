#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int cnt = 0;
    cin >> N >> M;

    string P = "I";
    string S;
    cin >> S;

    for (int i = 0; i < N; i++)
    {
        P += "OI";
    }

    for (int i = 0; i < S.size(); i++)
    {
        if (S.substr(i, P.size()) == P)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}