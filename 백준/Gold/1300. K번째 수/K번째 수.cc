#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int K;
    cin >> K;

    int s = 1, e = K;
    int ans = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        int cnt = 0;

        for (int i = 1; i <= N; i++)
        {
            cnt += min(mid / i, N);
        }

        if (cnt >= K)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    cout << ans;

    return 0;
}