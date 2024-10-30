#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt[11];

    fill(cnt, cnt + 11, 2);

    int A, B;
    cin >> A >> B;

    cnt[A]--;
    cnt[B]--;

    int tmp = (A + B) % 10;
    int tot = 18 * 17 / 2;

    cout.precision(3);
    cout << fixed;

    int ans = 0;

    if (A == B)
    {
        ans = tot - (10 - A);
        cout << 1.0 * ans / tot;
        return 0;
    }

    // A != B 인 경우
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i + 1; j <= 10; j++)
        {
            if (tmp > (i + j) % 10)
            {
                if (i == A || i == B || j == A || j == B)
                {
                    ans += 2;
                }
                else
                {
                    ans += 4;
                }
            }
        }
    }

    cout << 1.0 * ans / tot;

    return 0;
}