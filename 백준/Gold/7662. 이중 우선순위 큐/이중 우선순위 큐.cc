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
        multiset<int> MS;
        int K;
        cin >> K;

        while (K--)
        {
            string cmd;
            cin >> cmd;

            if (cmd == "D")
            {
                int num;
                cin >> num;

                if (MS.empty())
                {
                    continue;
                }

                if (num == 1)
                {
                    MS.erase(prev(MS.end()));
                }
                else if (num == -1)
                {
                    MS.erase(MS.begin());
                }
            }
            else if (cmd == "I")
            {
                int num;
                cin >> num;

                MS.insert(num);
            }
        }
        if (MS.empty())
        {
            cout << "EMPTY\n";
        }
        else
        {
            cout << *prev(MS.end()) << " " << *MS.begin() << "\n";
        }
    }

    return 0;
}