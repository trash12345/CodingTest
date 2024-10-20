#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// 제곱수인지 찾기
bool check(long long x)
{
    long double tmp = sqrt(x);

    if (1LL * tmp * tmp == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<long long> A(N), sortedA(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sortedA[i] = A[i];
    }

    sort(sortedA.begin(), sortedA.end());

    for (int i = 0; i < N; i++)
    {
        long long a = A[i];
        long long b = sortedA[i];
        long long div = gcd(a, b);

        if (check(a / div) && check(b / div))
        {
            continue;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}