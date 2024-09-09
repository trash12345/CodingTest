#include <bits/stdc++.h>

using namespace std;

long long pre[100001];
int num[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    long long ans = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        pre[i + 1] = pre[i] + num[i];
    }

    for (int i = 0; i < N; i++)
    {
        // i번째 원소에 곱해지는 숫자를 prefix sum 으로 해결
        ans += num[i] * (pre[N] - pre[i + 1]);
    }

    cout << ans;

    return 0;
}