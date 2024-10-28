#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int A, B;
        cin >> A >> B;

        if (A == 0 && B == 0)
        {
            return 0;
        }

        cout << A / B << " " << A % B << " / " << B << "\n";
    }

    return 0;
}