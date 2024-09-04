#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        string N;
        cin >> N;

        if (N == "0")
        {
            break;
        }

        while (1)
        {
            int tmp = 0;

            for (int i = 0; i < N.size(); i++)
            {
                tmp += N[i] - '0';
            }

            if (tmp >= 10)
            {
                N = to_string(tmp);
            }
            else
            {
                cout << tmp << "\n";
                break;
            }
        }
    }

    return 0;
}