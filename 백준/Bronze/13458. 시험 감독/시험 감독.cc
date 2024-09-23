#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    int B, C;
    cin >> B >> C;
    long long cnt = 0;

    for (int i = 0; i < N; i++)
    {
        V[i] -= B;
        cnt++;
    }

    for (int i = 0; i < N; i++)
    {
        if (V[i] <= 0)
        {
            continue;
        }

        if (V[i] % C == 0)
        {
            cnt += V[i] / C;
        }
        else
        {
            cnt += V[i] / C + 1;
        }
    }

    cout << cnt;

    return 0;
}