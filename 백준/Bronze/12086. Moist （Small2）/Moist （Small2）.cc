#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    int num = 1;

    while (T--)
    {
        int N;
        cin >> N;

        vector<string> V(N);

        cin.ignore();
        for (int i = 0; i < N; i++)
        {
            getline(cin, V[i]);
        }

        int cnt = 0;
        int idx = 0;

        for (int i = 1; i < N; i++)
        {
            if (V[i] < V[idx])
            {
                cnt++;
            }
            else
            {
                idx = i;
            }
        }

        cout << "Case #" << num++ << ": " << cnt << "\n";
    }

    return 0;
}