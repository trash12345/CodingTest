#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> V;

    int N;
    long long sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int X, A;
        cin >> X >> A;
        V.push_back({X, A});
        sum += A;
    }

    sort(V.begin(), V.end());

    long long tmp = 0;

    for (int i = 0; i < N; i++)
    {
        tmp += V[i].second;

        if (tmp >= (sum + 1) / 2)
        {
            cout << V[i].first;
            break;
        }
    }

    return 0;
}