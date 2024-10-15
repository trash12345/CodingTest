#include <bits/stdc++.h>

using namespace std;

long long cnt[10];

long long solve(long long N)
{
    fill(cnt, cnt + 10, 0);

    if (N <= 0)
    {
        return 0;
    }

    long long ans = 0;
    long long digit = 1;
    long long tmp = 0;

    while (N)
    {
        int div = N % 10;
        N /= 10;

        for (int i = 0; i < div; i++)
        {
            cnt[i] += (N + 1) * digit;
        }
        for (int i = div + 1; i < 10; i++)
        {
            cnt[i] += N * digit;
        }

        cnt[div] += N * digit + tmp + 1;
        cnt[0] -= digit;

        tmp += div * digit;
        digit *= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        ans += cnt[i] * i;
    }

    return ans;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        long long L, U;

        cin >> L >> U;

        cout << solve(U) - solve(L - 1) << "\n";
    }

    return 0;
}