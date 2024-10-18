#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int sum = 0;

        vector<int> num;
        vector<char> mines;

        string S1;
        cin >> S1;

        for (int i = 0; i < N; i++)
        {
            int tmp = S1[i] - '0';
            sum += tmp;

            num.push_back(tmp);
        }

        string S2;
        cin >> S2;

        for (int i = 0; i < N; i++)
        {
            mines.push_back(S2[i]);
        }

        if (sum % 3 == 0)
        {
            cout << sum / 3 << "\n";
        }

        // 좌우 각각 1개씩 존재
        if (sum % 3 == 1)
        {
            cout << (sum + 2) / 3 << "\n";
        }

        // 좌우 중 1개 존재
        if (sum % 3 == 2)
        {
            cout << (sum + 1) / 3 << "\n";
        }
    }

    return 0;
}