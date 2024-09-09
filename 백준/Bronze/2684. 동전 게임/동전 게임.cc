#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string coin[] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
    int cnt[8] = {
        0,
    };

    int P;
    cin >> P;

    while (P--)
    {
        string S;
        cin >> S;

        for (int i = 0; i < S.size() - 2; i++)
        {
            string tmp = "";
            tmp += S[i];
            tmp += S[i + 1];
            tmp += S[i + 2];

            for (int j = 0; j < 8; j++)
            {
                if (coin[j] == tmp)
                {
                    cnt[j]++;
                }
            }
        }

        for (int i = 0; i < 8; i++)
        {
            cout << cnt[i] << " ";
        }

        fill(cnt, cnt + 8, 0);

        cout << "\n";
    }

    return 0;
}