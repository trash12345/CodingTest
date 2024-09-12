#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;

    int N;
    int a = 0, b = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;

        a += tmp1;
        b += tmp2;

        V.push_back(a - b);
    }

    for (auto i : V)
    {
        cout << i << "\n";
    }

    return 0;
}