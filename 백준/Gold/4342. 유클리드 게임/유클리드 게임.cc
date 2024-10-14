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

    while (1)
    {
        long long A, B;
        cin >> A >> B;

        if (A == 0 && B == 0)
        {
            break;
        }

        if (solve(A, B))
        {
            cout << "A wins\n";
        }
        else
        {
            cout << "B wins\n";
        }
    }

    return 0;
}