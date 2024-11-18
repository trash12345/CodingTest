#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = N; i >= 1; i -= 2)
    {
        cout << i << " ";
    }

    if (N % 2 == 0)
    {
        for (int i = 1; i <= N / 2; i++)
        {
            cout << 2 * i - 1 << " " << 2 * i << " " << 2 * i - 1 << " ";
        }
    }
    else
    {
        cout << 1 << " ";

        for (int i = 1; i <= N / 2; i++)
        {
            cout << 2 * i << " " << 2 * i + 1 << " " << 2 * i << " ";
        }
    }

    return 0;
}
