#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        int h;
        cin >> h;

        sum += h;
        cnt += h / 2;
    }

    if (sum % 3 != 0)
    {
        cout << "NO\n";
    }
    else
    {
        if (cnt >= sum / 3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}