#include <bits/stdc++.h>

using namespace std;

int red[1001];
int blue[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int sum = 0;

        fill(red, red + 1001, 0);
        fill(blue, blue + 1001, 0);

        // i번 모서리 -> j번 모서리로
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int num;
                cin >> num;

                if (num == 1)
                {
                    red[i]++;
                    red[j]++;
                }
                else
                {
                    blue[i]++;
                    blue[j]++;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            sum += red[i] * blue[i];
        }

        cout << N * (N - 1) * (N - 2) / 6 - sum / 2 << "\n";
    }

    return 0;
}