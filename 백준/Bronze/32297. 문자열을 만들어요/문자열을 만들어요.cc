#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string S;
    cin >> N;
    cin >> S;

    if (S.find("gori") == string::npos)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}