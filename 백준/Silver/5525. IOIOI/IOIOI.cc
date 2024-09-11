#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int ans = 0;
    cin >> N >> M;

    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        int cnt = 0;
        if (S[i] == 'I')
        {
            // 문자열 체크
            while (S[i + 1] == 'O' && S[i + 2] == 'I')
            {
                cnt++;
                if (cnt == N)
                {
                    cnt--;
                    ans++;
                }
                i += 2;
            }
        }
    }

    cout << ans;

    return 0;
}