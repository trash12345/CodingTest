#include <bits/stdc++.h>

using namespace std;

struct compare
{
    bool operator()(string a, string b)
    {
        return a + b > b + a;
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<string, vector<string>, compare> pq;

    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        pq.push(S);
    }

    while (!pq.empty())
    {
        string tmp = pq.top();
        pq.pop();

        cout << tmp[0];

        if (tmp.size() == 1)
        {
            continue;
        }

        tmp = tmp.substr(1, tmp.size() - 1);
        pq.push(tmp);
    }

    return 0;
}