#include <bits/stdc++.h>

using namespace std;

string nums[51];
string ans[51];

bool compare(string A, string B)
{
    if (A.size() == B.size())
    {
        return A > B;
    }
    else
    {
        return A.size() > B.size();
    }
}

bool sol(string A, string B)
{
    return A + B > B + A;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K, N;
    cin >> K >> N;

    for (int i = 0; i < K; i++)
    {
        cin >> nums[i];
    }

    // 긴거 먼저, 길이가 같다면 숫자가 큰거 먼저
    sort(nums, nums + K, compare);

    // K개 일단 입력하고
    // N-K개는 제일 큰 수 입력
    for (int i = 0; i < K; i++)
    {
        ans[i] = nums[i];
    }

    for (int i = K; i < N; i++)
    {
        ans[i] = nums[0];
    }

    // 문자열 더할 때 최대 최소 비교
    sort(ans, ans + N, sol);

    for (int i = 0; i < N; i++)
    {
        cout << ans[i];
    }

    return 0;
}