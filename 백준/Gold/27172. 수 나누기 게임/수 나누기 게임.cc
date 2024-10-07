#include <bits/stdc++.h>

using namespace std;

int ans[1000001];
bool possible[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
        possible[V[i]] = true;
    }

    for (auto num : V)
    {
        // 배수들에 대해서 검사
        for (int i = num * 2; i <= 1000000; i += num)
        {
            if (possible[i])
            {
                ans[i]--;
                ans[num]++;
            }
        }
    }

    for (auto num : V)
    {
        cout << ans[num] << " ";
    }

    return 0;
}