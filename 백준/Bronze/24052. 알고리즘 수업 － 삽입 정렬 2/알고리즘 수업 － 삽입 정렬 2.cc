#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    int cnt = 0;
    int tmp;
    int loc;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < N; i++)
    {
        loc = i - 1;
        tmp = arr[i];

        while (loc >= 0 && tmp < arr[loc])
        {
            cnt++;

            arr[loc + 1] = arr[loc];
            loc--;

            if (cnt == K)
            {
                for (int k = 0; k < N; k++)
                {
                    cout << arr[k] << " ";
                }

                return 0;
            }
        }

        if (loc != i - 1)
        {
            cnt++;
            arr[loc + 1] = tmp;

            if (cnt == K)
            {
                for (int k = 0; k < N; k++)
                {
                    cout << arr[k] << " ";
                }

                return 0;
            }
        }
    }

    cout << "-1";

    return 0;
}