#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H, M;
    cin >> H >> M;

    cout << (H - 9) * 60 + M;

    return 0;
}