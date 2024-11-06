#include <bits/stdc++.h>

using namespace std;

int combination(int n, int r)
{
    if (r == n || r == 0)
    {
        return 1;
    }

    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    cout << combination(N, 5);

    return 0;
}