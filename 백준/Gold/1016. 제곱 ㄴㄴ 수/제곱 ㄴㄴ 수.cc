#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long min, max;
    cin >> min >> max;

    long long ans = max - min + 1;

    for (long long i = 2; i * i <= max; i++)
    {
        long long tmp = min % (i * i) == 0 ? min / (i * i) : min / (i * i) + 1;

        while (tmp * (i * i) <= max)
        {
            if (check[tmp * (i * i) - min] == false)
            {
                check[tmp * (i * i) - min] = true;
                ans--;
            }
            tmp++;
        }
    }

    cout << ans;

    return 0;
}