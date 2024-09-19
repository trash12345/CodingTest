#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> V;
    priority_queue<int, vector<int>, greater<int>> pq;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int start, end;
        cin >> start >> end;
        V.push_back({start, end});
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < N; i++)
    {
        pq.push(V[i].second);
        if (pq.top() <= V[i].first)
        {
            pq.pop();
        }
    }

    cout << pq.size();

    return 0;
}