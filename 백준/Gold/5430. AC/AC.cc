#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        deque<int> dq;

        string P;
        cin >> P;

        int N;
        bool isempty = false;
        bool isreverse = false;
        cin >> N;

        string arr;
        cin >> arr;

        string ans = "";

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == ',' || arr[i] == ']')
            {
                if (ans != "")
                {
                    dq.push_back(stoi(ans));
                    ans = "";
                }
            }
            else
            {
                ans += arr[i];
            }
        }

        for (int i = 0; i < P.size(); i++)
        {
            if (P[i] == 'R')
            {
                isreverse = !isreverse;
            }
            else if (P[i] == 'D')
            {
                if (dq.empty())
                {
                    isempty = true;
                    break;
                }
                if (isreverse)
                {
                    dq.pop_back();
                }
                else
                {
                    dq.pop_front();
                }
            }
        }

        if (isempty)
        {
            cout << "error\n";
        }
        else
        {
            if (isreverse)
            {
                reverse(dq.begin(), dq.end());
            }
            cout << "[";
            for (int i = 0; i < dq.size(); i++)
            {
                if (i == dq.size() - 1)
                {
                    cout << dq[i];
                }
                else
                {
                    cout << dq[i] << ",";
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}