#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cnt1 = 0, cnt2 = 0;

    while (N--)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            cnt1++;
        }
        if (a == -1)
        {
            cnt2++;
        }
    }

    if (cnt1 == cnt2)
    {
        cout << "Stay";
    }
    else if (cnt1 > cnt2)
    {
        cout << "Right";
    }
    else
    {
        cout << "Left";
    }

    return 0;
}