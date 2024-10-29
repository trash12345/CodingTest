#include <bits/stdc++.h>

using namespace std;

int N, K;
int arr[10001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }

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

    cout << -1;

    return 0;
}