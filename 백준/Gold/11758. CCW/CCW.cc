#include <bits/stdc++.h>

using namespace std;

long long CCW(long long a1, long long b1, long long a2, long long b2, long long a3, long long b3)
{
    return (a2 - a1) * (b3 - b1) - (a3 - a1) * (b2 - b1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    int x3, y3;
    cin >> x3 >> y3;

    int res = CCW(x1, y1, x2, y2, x3, y3);

    if (res < 0)
    {
        cout << "-1";
    }
    else if (res > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}