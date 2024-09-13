#include <bits/stdc++.h>

using namespace std;

// 오일러 피 함수
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    long long ans;
    cin >> N;

    ans = N;

    for (long long i = 2; i * i <= N; i++)
    {
        if (N % i != 0)
        {
            continue;
        }

        ans -= ans / i;

        while (N % i == 0)
        {
            N /= i;
        }
    }

    if (N != 1)
    {
        ans -= ans / N;
    }

    cout << ans;

    return 0;
}