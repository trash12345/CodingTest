#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int, vector<int>, less<int>> pq;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            if (pq.empty())
            {
                cout << "0\n";
            }
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
    }

    return 0;
}