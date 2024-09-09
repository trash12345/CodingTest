#include <bits/stdc++.h>

using namespace std;

int stu[1000001][6];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int ans = INT_MIN;
    int idx_x, idx_y;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> stu[i][j];
        }
    }

    for (int j = 1; j <= 5; j++)
    {
        for (int k = j + 1; k <= 5; k++)
        {
            int cnt = 0;

            for (int i = 1; i <= N; i++)
            {
                // 학생이 가능한 요일 쌍
                if (stu[i][j] && stu[i][k])
                {
                    cnt++;
                }

                if (ans < cnt)
                {
                    ans = cnt;
                    idx_x = j;
                    idx_y = k;
                }
            }
        }
    }

    cout << ans << "\n";

    for (int i = 1; i <= 5; i++)
    {
        if (i == idx_x || i == idx_y)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }

    return 0;
}