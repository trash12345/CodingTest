#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long double A, B, C;
    cin >> A >> B >> C;

    cout.precision(20);
    cout << fixed;

    long double ep = 1e-13;
    long double s = 0, e = 2 * C;

    long double ans;

    while (e - s > ep)
    {
        long double mid = (s + e) / 2.0;

        if (A * mid + B * sin(mid) - C > 0)
        {
            ans = mid;
            e = mid;
        }
        else
        {
            s = mid;
        }
    }

    cout << ans;

    return 0;
}