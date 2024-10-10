#include <bits/stdc++.h>

using namespace std;

int matrix[222][222];
int cnt[111];

int r, c, k;

void input()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void init()
{
    fill(cnt, cnt + 111, 0);
}

void solve()
{
    int maxr = 3;
    int maxc = 3;
    int T = 0;

    while (1)
    {
        if (matrix[r][c] == k)
        {
            break;
        }

        if (T > 100)
        {
            T = -1;
            break;
        }

        // R연산을 하는 경우
        if (maxr >= maxc)
        {
            int mx = 0;
            // 모든 행에 대해서 정렬 (Count와 오름차순)
            for (int i = 1; i <= maxr; i++)
            {
                // count 되는 수의 조합을 찾기
                vector<pair<int, int>> V;
                init();

                // 각 행의 개수를 세기
                for (int j = 1; j <= maxc; j++)
                {
                    cnt[matrix[i][j]]++;
                }

                // 각 숫자를 개수에 맞게 넣어주기
                for (int j = 1; j <= 100; j++)
                {
                    if (cnt[j] != 0)
                    {
                        V.push_back({cnt[j], j});
                    }
                }

                int len = V.size();

                sort(V.begin(), V.end());
                mx = max(mx, 2 * len);

                // 초기화
                for (int j = 1; j <= 100; j++)
                {
                    matrix[i][j] = 0;
                }

                int idx = 1;
                for (int j = 0; j < len; j++)
                {
                    matrix[i][idx++] = V[j].second;
                    matrix[i][idx++] = V[j].first;
                }
            }
            maxc = mx;
        }
        // C연산을 하는 경우
        else
        {
            int mx = 0;
            // 모든 행에 대해서 정렬 (Count와 오름차순)
            for (int j = 1; j <= maxc; j++)
            {
                // count 되는 수의 조합을 찾기
                vector<pair<int, int>> V;
                init();

                // 각 행의 개수를 세기
                for (int i = 1; i <= maxr; i++)
                {
                    cnt[matrix[i][j]]++;
                }

                // 각 숫자를 개수에 맞게 넣어주기
                for (int i = 1; i <= 100; i++)
                {
                    if (cnt[i] != 0)
                    {
                        V.push_back({cnt[i], i});
                    }
                }

                int len = V.size();

                sort(V.begin(), V.end());
                mx = max(mx, 2 * len);

                // 초기화
                for (int i = 0; i <= 100; i++)
                {
                    matrix[i][j] = 0;
                }

                int idx = 1;
                for (int i = 0; i < len; i++)
                {
                    matrix[idx++][j] = V[i].second;
                    matrix[idx++][j] = V[i].first;
                }
            }
            maxr = mx;
        }

        T++;
    }

    cout << T;
    return;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> c >> k;

    input();
    solve();

    return 0;
}