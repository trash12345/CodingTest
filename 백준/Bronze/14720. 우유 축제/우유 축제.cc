#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int milk = 0;
    int ans = 0;
    cin >> N;

    vector<int> V;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        V.push_back(num);
    }

    for (int i = 0; i < N; i++)
    {
        if (V[i] == 0 && milk == 0)
        {
            ans++;
            milk = 1;
        }
        else if (V[i] == 1 && milk == 1)
        {
            ans++;
            milk = 2;
        }
        else if (V[i] == 2 && milk == 2)
        {
            ans++;
            milk = 0;
        }
    }

    cout << ans;

    return 0;
}