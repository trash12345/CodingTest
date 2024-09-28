#include <bits/stdc++.h>

using namespace std;

int N;

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void dfs(int num, int len)
{
    if (len == N)
    {
        cout << num << "\n";
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        if (isPrime(num * 10 + i))
        {
            dfs(num * 10 + i, len + 1);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    dfs(2, 1);
    dfs(3, 1);
    dfs(5, 1);
    dfs(7, 1);

    return 0;
}