#include <bits/stdc++.h>
using namespace std;

int arr[55555];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int N;
        cin >> N;
        if (N == -1)
            break;
        int idx = 0;
        int sum = 0;
        int len = 0;

        for (int i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                arr[idx++] = i;
                sum += i;
                len++;
            }
        }
        
        if (N == sum)
        {
            cout << N << " = " << arr[0];
            for (int i = 1; i < len; i++)
            {
                cout << " + " << arr[i];
            }
            cout << "\n";
        }
        else
            cout << N << " is NOT perfect.\n";
    }

    return 0;
}