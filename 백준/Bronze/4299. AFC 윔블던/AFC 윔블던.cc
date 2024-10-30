#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    if (A < B || (A + B) % 2 == 1)
    {
        cout << -1;
        return 0;
    }

    cout << (A + B) / 2 << " " << (A - B) / 2;

    return 0;
}