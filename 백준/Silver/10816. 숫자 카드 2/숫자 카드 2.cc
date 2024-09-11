#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> V;

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
        cout << upper_bound(V.begin(), V.end(), val) - lower_bound(V.begin(), V.end(), val) << " ";
    }

    return 0;
}