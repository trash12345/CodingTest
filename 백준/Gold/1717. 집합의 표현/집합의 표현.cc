#include <bits/stdc++.h>

using namespace std;

int N, M;
int V[1000001];

int find(int val)
{
    if (val == V[val])
    {
        return val;
    }
    else
    {
        return V[val] = find(V[val]);
    }
}

void uni(int val1, int val2)
{
    // 각각의 root 찾기
    val1 = find(val1);
    val2 = find(val2);

    // val1 과 val2 이어주기
    V[val1] = val2;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i <= N; i++)
    {
        V[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        int mode;
        int a, b;
        cin >> mode >> a >> b;

        if (mode == 0)
        {
            uni(a, b);
        }
        else
        {
            a = find(a);
            b = find(b);

            if (a == b)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}