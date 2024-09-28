#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    while (N--)
    {
        long double A, B, C, D;
        cin >> A >> B >> C >> D;

        cout.precision(10);
        cout << fixed;

        long double x1 = 0.0;

        set<long double> S;
        S.clear();

        for (long double i = -1000000; i <= 1000000; i++)
        {
            if (A * i * i * i + B * i * i + C * i + D == 0)
            {
                x1 = i;
                S.insert(x1);
                break;
            }
        }

        B = A * x1 + B;
        C = B * x1 + C;

        long double dis = B * B - 4 * A * C;

        if (dis >= 0)
        {
            S.insert((-B + sqrt(dis)) / (2.0 * A));
            S.insert((-B - sqrt(dis)) / (2.0 * A));
        }

        for (auto i : S)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}