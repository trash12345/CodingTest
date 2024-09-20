#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    const double pi = 3.14159265358979;

    cout << fixed;
    cout.precision(3);

    double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    // 반지름 길이 대소 고정
    if (r1 < r2)
    {
        swap(r1, r2);
    }

    if (r1 + r2 <= dist)
    {
        cout << "0.000";
    }
    else if (r1 - r2 >= dist)
    {
        cout << r2 * r2 * pi;
    }
    else
    {
        double t1 = acos((r1 * r1 + dist * dist - r2 * r2) / (2 * r1 * dist));
        double t2 = acos((r2 * r2 + dist * dist - r1 * r1) / (2 * r2 * dist));

        double tmp1 = (2 * t1 * r1 * r1 - r1 * r1 * sin(2 * t1)) / 2;
        double tmp2 = (2 * t2 * r2 * r2 - r2 * r2 * sin(2 * t2)) / 2;

        cout << tmp1 + tmp2;
    }

    return 0;
}