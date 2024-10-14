#include <bits/stdc++.h>

using namespace std;

long long alpha[26];
bool check[26];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        long long digit = 1;
        check[S[0] - 'A'] = true;

        // 알파벳 별로 자릿수 더하기
        for (int i = S.size() - 1; i >= 0; i--)
        {
            alpha[S[i] - 'A'] += digit;
            digit *= 10;
        }
    }

    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        if (alpha[i])
        {
            cnt++;
        }
    }

    if (cnt == 10)
    {
        int idx = 0;
        long long tmp = 2e16;

        for (int i = 0; i < 10; i++)
        {
            if (!check[i] && alpha[i] < tmp)
            {
                tmp = alpha[i];
                idx = i;
            }
        }

        alpha[idx] = 0;
    }

    sort(alpha, alpha + 10, greater<>());

    long long ans = 0;
    long long mul = 9;

    for (int i = 0; i <= 9; i++)
    {
        ans += alpha[i] * mul;
        mul--;
    }

    cout << ans;

    return 0;
}