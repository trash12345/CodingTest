#include <bits/stdc++.h>

using namespace std;

long long p;

// p 진법에서 합의 개수가 1개로 유일한 경우
// 1. 2인 경우 1+1
// 2. 0인 경우 0+0
// 그 외의 숫자 중 가능한 숫자는 1뿐 (1,0) or (0,1)

bool solve(long long N)
{
    // p진법에서의 1과 2의 개수 이용
    long long cntdiv_1 = 0, cntdiv_2 = 0;

    while (N)
    {
        // div는 p진법에서의 각 자리 숫자
        long long div = N % p;

        if (div >= 3)
        {
            return false;
        }
        if (div == 1)
        {
            cntdiv_1++;
        }
        if (div == 2)
        {
            cntdiv_2++;
        }

        N /= p;
    }

    // 1000...01(p) 의 형태
    // 1이 2개고 2가 0개인 경우 유일함
    if (cntdiv_1 == 2 && cntdiv_2 == 0)
    {
        return true;
    }

    // 2가 있다면 다른 1자리만 1이어야 함
    // 2개 이상이면 경우의 수가 2개 이상
    if (cntdiv_1 == 1 && cntdiv_2 >= 1)
    {
        return true;
    }

    return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n1, n2, n3, n4;
    cin >> p >> n1 >> n2 >> n3 >> n4;

    cout << (solve(n1) ? "1 " : "0 ");
    cout << (solve(n2) ? "1 " : "0 ");
    cout << (solve(n3) ? "1 " : "0 ");
    cout << (solve(n4) ? "1 " : "0 ");

    return 0;
}