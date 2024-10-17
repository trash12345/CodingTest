#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cnt1 = 0, cnt2 = 0;

    for (int i = 2; i <= N; i++)
    {
        int tmp = i;

        while (tmp % 2 == 0)
        {
            tmp /= 2;
            cnt1++;
        }

        while (tmp % 5 == 0)
        {
            tmp /= 5;
            cnt2++;
        }
    }

    cout << min(cnt1, cnt2);

    return 0;
}