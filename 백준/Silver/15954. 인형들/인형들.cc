#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> doll;

    int N, K;
    long double ans = LDBL_MAX;
    bool flag = true;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        long long num;
        cin >> num;
        doll.push_back(num);
    }

    while (K != N + 1)
    {
        for (int i = 0; i < N - K + 1; i++)
        {
            long double mean = 0.0;
            long double sd = 0.0;

            for (int j = i; j < i + K; j++)
            {
                mean += (long double)doll[j];
            }
            mean /= (long double)K;

            for (int j = i; j < i + K; j++)
            {
                sd += ((long double)doll[j] - mean) * ((long double)doll[j] - mean);
            }
            sd /= (long double)K;
            sd = sqrt(sd);

            ans = min(ans, sd);
        }
        K++;
    }

    cout << fixed;
    cout.precision(15);

    cout << ans;

    return 0;
}