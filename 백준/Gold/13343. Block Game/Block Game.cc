#include <bits/stdc++.h>

using namespace std;

bool solve(long long A, long long B)
{
    if (A < B)
    {
        swap(A, B);
    }

    if (A % B == 0)
    {
        return true;
    }

    if (A >= B * 2)
    {
        return true;
    }
    else
    {
        return !solve(B, A - B);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long A, B;
    cin >> A >> B;

    if (solve(A, B))
    {
        cout << "win\n";
    }
    else
    {
        cout << "lose\n";
    }

    return 0;
}