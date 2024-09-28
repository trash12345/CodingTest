#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long double x, y, c;
    cin >> x >> y >> c;

    cout.precision(10);
    cout << fixed;

    long double s = 0.0, e = min(x, y);
    long double ep = 1e-6;
    long double tmp = 0.0;
    long double ans;

    // 이분탐색으로 해 구하기
    while (e - s > ep)
    {
        long double mid = (s + e) / 2.0;
        tmp = (sqrt(x * x - mid * mid) * sqrt(y * y - mid * mid)) / (sqrt(x * x - mid * mid) + sqrt(y * y - mid * mid));

        if (tmp < c)
        {
            e = mid;
        }
        else
        {
            ans = mid;
            s = mid;
        }
    }

    cout << ans;

    return 0;
}