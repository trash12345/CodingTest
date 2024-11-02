#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V;

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;

        V.push_back(A);
    }

    for (int i = 0; i < N; i++)
    {
        int B;
        cin >> B;

        V[i] -= B;
    }

    // 부호가 바뀔때까지 계산
    int ans = abs(V[N - 1]);
    int pre = V[0];

    for (int i = 1; i < N; i++)
    {
        if (V[i] * pre < 0)
        {
            ans += abs(pre);
        }
        else if (abs(pre) > abs(V[i]))
        {
            ans += abs(V[i] - pre);
        }

        pre = V[i];
    }

    cout << ans;

    return 0;
}