#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, less<int>> mx;
    priority_queue<int, vector<int>, greater<int>> mn;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        if (mx.empty() || x <= mx.top())
        {
            mx.push(x);
        }
        else
        {
            mn.push(x);
        }

        if (mx.size() > mn.size() + 1)
        {
            mn.push(mx.top());
            mx.pop();
        }
        else if (mn.size() > mx.size())
        {
            mx.push(mn.top());
            mn.pop();
        }

        cout << mx.top() << "\n";
    }

    return 0;
}