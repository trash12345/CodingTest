#include <bits/stdc++.h>

using namespace std;

// 나머지 배열
long long cnt[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    long long sum = 0;
    long long ans = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sum += a;
        cnt[sum % M]++;
    }

    // cnt[i] 에서 2개의 원소를 뽑음
    for (int i = 0; i < M; i++)
    {
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }

    // 단일 나머지가 0인 것의 개수 + 합의 나머지가 0인 것의 개수
    cout << cnt[0] + ans;

    return 0;
}