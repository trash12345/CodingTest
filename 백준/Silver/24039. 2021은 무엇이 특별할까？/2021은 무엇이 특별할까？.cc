#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> prime;

    int ans = 0;

    for (int i = 2; i <= 111; i++)
    {
        bool isPrime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            prime.push_back(i);
        }
    }

    for (int i = 0; ans <= N; i++)
    {
        ans = prime[i] * prime[i + 1];
    }

    cout << ans;

    return 0;
}