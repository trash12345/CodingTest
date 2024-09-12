#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int num[3];
    int tmp[3];
    int mx[3] = {0, 0, 0};
    int mn[3] = {0, 0, 0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num[0] >> num[1] >> num[2];

        for (int j = 0; j < 3; j++)
        {
            tmp[j] = mx[j];
        }

        mx[0] = max(tmp[0], tmp[1]) + num[0];
        mx[1] = max(max(tmp[0], tmp[2]), tmp[1]) + num[1];
        mx[2] = max(tmp[1], tmp[2]) + num[2];

        for (int j = 0; j < 3; j++)
        {
            tmp[j] = mn[j];
        }

        mn[0] = min(tmp[0], tmp[1]) + num[0];
        mn[1] = min(min(tmp[0], tmp[2]), tmp[1]) + num[1];
        mn[2] = min(tmp[1], tmp[2]) + num[2];
    }

    cout << max(max(mx[0], mx[1]), mx[2]) << " ";
    cout << min(min(mn[0], mn[1]), mn[2]) << " ";

    return 0;
}