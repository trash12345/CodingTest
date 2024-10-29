#include <bits/stdc++.h>

using namespace std;

long long solve(long long N)
{
    if (N == 0 || N == 1)
    {
        return N;
    }
    else if (N & 1)
    {
        return N / 2 + 2 * solve(N / 2) + 1;
    }
    else
    {
        return N / 2 + 2 * solve(N / 2);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long A, B;
    cin >> A >> B;

    cout << solve(B) - solve(A - 1);

    return 0;
}