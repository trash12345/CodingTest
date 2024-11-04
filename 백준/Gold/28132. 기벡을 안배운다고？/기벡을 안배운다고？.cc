#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cnt = 0;
    long long sum = 0;

    map<pair<int, int>, int> mp;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        int tmpx, tmpy;
        cin >> x >> y;

        // 영벡터
        if (x == 0 && y == 0)
        {
            cnt++;
            continue;
        }
        // 단위벡터
        else if (x == 0)
        {
            tmpx = 0;
            tmpy = 1;
        }
        else if (y == 0)
        {
            tmpx = 1;
            tmpy = 0;
        }
        // 나머지 벡터
        else
        {
            tmpx = x / gcd(x, y);
            tmpy = y / gcd(x, y);
        }

        sum += mp[{tmpx, tmpy}];
        mp[{-tmpy, tmpx}]++;
        mp[{tmpy, -tmpx}]++;
    }

    cout << 1LL * sum + 1LL * cnt * (cnt - 1) / 2 + 1LL * cnt * (N - cnt);

    return 0;
}