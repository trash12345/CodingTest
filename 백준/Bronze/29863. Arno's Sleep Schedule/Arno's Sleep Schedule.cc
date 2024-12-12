#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    if (A >= 20 && A <= 23)
    {
        cout << 24 - A + B;
    }
    else
    {
        cout << B - A;
    }

    return 0;
}