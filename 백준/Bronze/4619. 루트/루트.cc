#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int B, N;
        cin >> B >> N;

        int mn = INT_MAX;
        int ans = 0;

        if (B == 0 && N == 0)
        {
            break;
        }

        for (int A = 1; pow(A, N) <= 4000000; A++)
        {
            if (abs(pow(A, N) - B) < mn)
            {
                mn = abs(pow(A, N) - B);
                ans = A;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}