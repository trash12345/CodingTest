#include <bits/stdc++.h>

using namespace std;

int alpha[26];

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

        int digit = 1;

        // 알파벳 별로 자릿수 더하기
        for (int i = S.size() - 1; i >= 0; i--)
        {
            alpha[S[i] - 'A'] += digit;
            digit *= 10;
        }
    }

    sort(alpha, alpha + 26, greater<>());

    int ans = 0;
    int mul = 9;

    for (int i = 0; i <= 9; i++)
    {
        if (alpha[i] != 0)
        {
            ans += alpha[i] * mul;
            mul--;
        }
    }

    cout << ans;

    return 0;
}