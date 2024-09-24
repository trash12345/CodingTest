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
        int N, M;
        cin >> N >> M;

        deque<int> S(N), B(M);

        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }

        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
        }

        sort(S.begin(), S.end());
        sort(B.begin(), B.end());

        if (S[S.size() - 1] >= B[B.size() - 1])
        {
            cout << "S\n";
        }
        else if (S[S.size() - 1] < B[B.size() - 1])
        {
            cout << "B\n";
        }
    }

    return 0;
}