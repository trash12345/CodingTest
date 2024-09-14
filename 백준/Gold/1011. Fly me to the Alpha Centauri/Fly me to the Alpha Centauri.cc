#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int cnt;
        int x, y;
        cin >> x >> y;

        // 기본적인 숫자 구조는 1 2 3 2 1 같은 구조에 개수만 추가
        // 1 2 ... K ... 2 1 의 합이 K^2 이므로 중간 숫자의 제곱과 같음
        // 값이 K^2 에서 K^2 + K 인 경우는 괜찮
        // K^2+K+1 부터 (K+1)^2 인 경우엔 횟수가 2개 추가
        int dist = y - x;
        int square = sqrt(y - x);

        // K^2 인 경우
        if (dist == square * square)
        {
            cnt = 2 * square - 1;
        }
        else
        {
            cnt = 2 * square;
        }
        if (dist >= square * square + square + 1)
        {
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}