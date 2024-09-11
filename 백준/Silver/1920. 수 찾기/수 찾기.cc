#include <bits/stdc++.h>

using namespace std;

vector<int> V;

int sol(int N)
{
    int s = 0, e = V.size() - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (V[mid] < N)
        {
            s = mid + 1;
        }
        else if (V[mid] > N)
        {
            e = mid - 1;
        }
        else
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        V.push_back(num);
    }

    sort(V.begin(), V.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        cout << sol(val) << "\n";
    }

    return 0;
}