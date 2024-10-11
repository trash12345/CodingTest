#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    vector<int> score(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
    }

    sort(score.begin(), score.end());

    for (int i = 0; i < N; i++)
    {
        sum += score[i];
        
        if (sum < i * (i + 1) / 2)
        {
            cout << -1;
            return 0;
        }
    }

    if (sum == N * (N - 1) / 2)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }

    return 0;
}