#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    if (N % 2 == 0 || N % 5 == 0)
    {
        cout << -1;
        return 0;
    }

    int cnt = 1;
    int digit = 0;

    while (1)
    {
        digit = (digit * 10 + 1) % N;

        if (digit % N == 0)
        {
            cout << cnt;
            break;
        }

        cnt++;
    }

    return 0;
}