#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int tmp = N / 2;

    if (N % 6 == 2)
    {
        for (int i = 1; i <= tmp; i++)
        {
            cout << 2 * i << "\n";
        }

        cout << "3\n1\n";

        for (int i = 3; i < tmp; i++)
        {
            cout << 2 * i + 1 << "\n";
        }

        cout << "5\n";
    }
    else if (N % 6 == 3)
    {
        for (int i = 2; i <= tmp; i++)
        {
            cout << 2 * i << "\n";
        }

        cout << "2\n";

        for (int i = 2; i <= tmp; i++)
        {
            cout << 2 * i + 1 << "\n";
        }

        cout << "1\n3\n";
    }
    else
    {
        for (int i = 1; i <= tmp; i++)
        {
            cout << i + tmp << "\n"
                 << i << "\n";
        }

        if (N % 2 == 1)
        {
            cout << N << "\n";
        }
    }

    return 0;
}