#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> V;

    int N, M, K;
    int dist = INT_MIN;
    int ans;
    cin >> N >> M >> K;

    for (int i = 0; i < K; i++)
    {
        int x, y;
        cin >> x >> y;

        // (M - y , x)
        int tmp = y + N - x;

        if (dist < tmp)
        {
            dist = tmp;
            ans = i + 1;
        }
    }

    cout << ans;

    return 0;
}