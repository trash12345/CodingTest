#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    if (N % 2 == 1 && M % 2 == 1)
    {
        cout << N * M - 1;
    }
    else
    {
        cout << N * M;
    }

    return 0;
}