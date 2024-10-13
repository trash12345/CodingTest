#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string A, B;
    cin >> A >> B;

    if (A.size() >= B.size())
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }

    return 0;
}