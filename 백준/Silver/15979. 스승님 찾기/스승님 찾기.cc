#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y)
{
    return y ? gcd(y, x % y) : x;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;

    M < 0 ? M = -M : M;
    N < 0 ? N = -N : N;

    if (M < N)
    {
        swap(M, N);
    }

    int ans = min(gcd(M, N), 2);

    cout << ans;

    return 0;
}