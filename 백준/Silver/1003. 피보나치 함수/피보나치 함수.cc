#include <bits/stdc++.h>

using namespace std;

int arr[50];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    arr[0] = 1;
    arr[1] = 0;
    arr[2] = 1;

    for (int i = 3; i <= 50; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    while (T--)
    {
        int N;
        cin >> N;

        cout << arr[N] << " " << arr[N + 1] << "\n";
    }

    return 0;
}