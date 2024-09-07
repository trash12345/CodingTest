#include <bits/stdc++.h>

using namespace std;

bool notSelf[100001];

int sol(int N)
{
    int val = N;

    while (N)
    {
        val += N % 10;
        N /= 10;
    }

    return val;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 10000; i++)
    {
        notSelf[sol(i)] = true;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!notSelf[i])
        {
            cout << i << "\n";
        }
    }

    return 0;
}