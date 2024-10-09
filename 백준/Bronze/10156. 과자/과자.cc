#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K, N, M;
    cin >> K >> N >> M;

    cout << (K * N - M >= 0 ? K * N - M : 0);

    return 0;
}