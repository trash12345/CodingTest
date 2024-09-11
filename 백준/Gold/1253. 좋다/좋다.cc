#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;

    int N;
    int cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        V.push_back(num);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < N; i++)
    {
        int s = 0, e = N - 1;

        while (s < e)
        {
            if (V[s] + V[e] < V[i])
            {
                s++;
            }
            else if (V[s] + V[e] > V[i])
            {
                e--;
            }
            else
            {
                if (s == i)
                {
                    s++;
                }
                else if (e == i)
                {
                    e--;
                }
                else
                {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}