#include <bits/stdc++.h>

using namespace std;

// 거리와 D를 비교하기
// 도착할 수 있는 경우의 수
// 1. 걸어가기 2. 점프 뛰고 앞/뒤로걷기 3. 점프만 뛰기
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double X, Y, D, T;
    cin >> X >> Y >> D >> T;

    cout.precision(15);
    cout << fixed;

    double dist = sqrt(X * X + Y * Y);

    if (dist >= D)
    {
        double jump = (int)(dist / D);
        cout << min(dist, min(jump * T + dist - (jump * D), (jump + 1) * T));
    }
    else
    {
        cout << min(T + D - dist, min(2 * T, dist));
    }

    return 0;
}