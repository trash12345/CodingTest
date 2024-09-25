#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt = 0;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        if (a % 2 == 0)
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }

        cnt++;
    }

    if (cnt % 2 == 1)
    {
        if (cnt1 - cnt0 == 1)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        if (cnt0 == cnt1)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}