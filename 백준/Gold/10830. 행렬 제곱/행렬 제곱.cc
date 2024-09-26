#include <bits/stdc++.h>

using namespace std;

int matrix[5][5];
int ans[5][5];
int N;

void sol(int a[5][5], int b[5][5])
{
    int cal[5][5] = {
        0,
    };

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                cal[i][j] += (a[i][k] * b[k][j]);
            }
            cal[i][j] %= 1000;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = cal[i][j];
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long B;
    cin >> N >> B;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
            if (i == j)
            {
                ans[i][j] = 1;
            }
        }
    }

    while (B)
    {
        if (B % 2 == 1)
        {
            sol(ans, matrix);
        }

        sol(matrix, matrix);

        B /= 2;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}