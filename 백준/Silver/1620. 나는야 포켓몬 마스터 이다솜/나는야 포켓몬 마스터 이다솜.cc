#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> V(100001, "");
    map<string, int> mp;

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        string S;
        cin >> S;
        mp[S] = i;
        V[i] = S;
    }

    for (int i = 1; i <= M; i++)
    {
        string Q;
        cin >> Q;

        // 알파벳 -> 숫자를 출력해야 함
        if (mp.find(Q) != mp.end())
        {
            cout << mp[Q] << "\n";
        }
        else
        {
            cout << V[stoi(Q)] << "\n";
        }
    }

    return 0;
}