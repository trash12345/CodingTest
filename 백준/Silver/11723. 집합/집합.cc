#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> S;

    int M;
    cin >> M;

    while (M--)
    {
        int val;
        string command;
        cin >> command;

        if (command == "add")
        {
            cin >> val;
            S.insert(val);
        }
        else if (command == "remove")
        {
            cin >> val;
            S.erase(val);
        }
        else if (command == "check")
        {
            cin >> val;
            if (S.find(val) != S.end())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (command == "toggle")
        {
            cin >> val;
            if (S.find(val) != S.end())
            {
                S.erase(val);
            }
            else
            {
                S.insert(val);
            }
        }
        else if (command == "all")
        {
            S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        }
        else if (command == "empty")
        {
            S = {};
        }
    }

    return 0;
}