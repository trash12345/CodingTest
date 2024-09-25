#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int L;
    cin >> L;

    cout << (L % 5 == 0 ? L / 5 : L / 5 + 1);

    return 0;
}