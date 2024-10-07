#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

// 각 건물에 번호를 부여하고 matrix 만들기
vector<vector<long long>> matrix = {
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 0, 1, 0},
};

vector<vector<long long>> mul(vector<vector<long long>> &V1, vector<vector<long long>> &V2)
{
    vector<vector<long long>> res(8, vector<long long>(8));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            long long tmp = 0;
            for (int k = 0; k < 8; k++)
            {
                tmp += V1[i][k] * V2[k][j];
            }
            res[i][j] = tmp % mod;
        }
    }

    return res;
}

// 행렬의 D제곱 = D분 후 갈 수 있는 경우의 수
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long D;
    cin >> D;

    vector<vector<long long>> ans(8, vector<long long>(8));

    for (int i = 0; i < 8; i++)
    {
        ans[i][i] = 1;
    }

    while (D)
    {
        if (D % 2 == 1)
        {
            ans = mul(ans, matrix);
        }
        
        matrix = mul(matrix, matrix);
        D /= 2;
    }

    cout << ans[0][0];

    return 0;
}
