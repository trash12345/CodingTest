#include <bits/stdc++.h>

using namespace std;

double inclination(double x1, double y1, double x2, double y2)
{
    return abs(x1 - x2) / abs(y1 - y2);
}

double length(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;

    return sqrt(x * x + y * y);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << fixed;
    cout.precision(16);

    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (inclination(x1, y1, x2, y2) == inclination(x1, y1, x3, y3))
    {
        cout << "-1.0";
        return 0;
    }

    double len1 = length(x1, y1, x2, y2);
    double len2 = length(x1, y1, x3, y3);
    double len3 = length(x2, y2, x3, y3);

    cout << (max(len1 + len2, max(len2 + len3, len1 + len3)) - min(len1 + len2, min(len2 + len3, len1 + len3))) * 2;

    return 0;
}