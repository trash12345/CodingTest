#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> ball(200001, 0);

    int N, X, K;
    cin >> N >> X >> K;

    for (int i = 1; i <= N; i++)
    {
        ball[i] = i;
    }

    for (int i = 0; i < K; i++)
    {
        int A, B;
        cin >> A >> B;
        swap(ball[A], ball[B]);
    }

    for (int i = 1; i <= N; i++)
    {
        if (ball[i] == X)
        {
            cout << i;
            break;
        }
    }

    return 0;
}