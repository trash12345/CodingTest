#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> V;

    int N;
    long long a, b, c;
    long long ans = 3e9 + 21;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        V.push_back(num);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < N - 2; i++)
    {
        int s = i + 1;
        int e = N - 1;

        while (s < e)
        {
            long long num = V[i] + V[s] + V[e];

            if (abs(num) < ans)
            {
                ans = abs(num);
                a = V[i];
                b = V[s];
                c = V[e];
            }

            if (num < 0)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }

    cout << a << " " << b << " " << c;

    return 0;
}