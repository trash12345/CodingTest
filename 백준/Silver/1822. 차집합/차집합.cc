#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    map<int, int> mp;

    for (int i = 0; i < A; i++)
    {
        int N;
        cin >> N;
        mp[N]++;
    }

    for (int i = 0; i < B; i++)
    {
        int N;
        cin >> N;
        mp.erase(N);
    }

    cout << mp.size() << "\n";

    for (auto i : mp)
    {
        cout << i.first << " ";
    }

    return 0;
}