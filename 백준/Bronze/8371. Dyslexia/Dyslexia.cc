#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    string S1, S2;
    cin >> S1 >> S2;

    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        if (S1[i] != S2[i])
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}