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
        int N;
        cin >> N;
        bool possible = true;

        vector<pair<int, int>> odd, even;

        int prev = 0, nxt = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> prev;

            if (i != 0)
            {
                if (i % 2 == 0)
                {
                    if (prev > nxt)
                    {
                        odd.push_back({nxt, prev});
                    }
                    else
                    {
                        odd.push_back({prev, nxt});
                    }
                }
                else
                {
                    if (prev > nxt)
                    {
                        even.push_back({nxt, prev});
                    }
                    else
                    {
                        even.push_back({prev, nxt});
                    }
                }
            }
            nxt = prev;
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        for (int i = 0; i < odd.size() - 1; i++)
        {
            if (odd[i].first < odd[i + 1].first && odd[i + 1].first < odd[i].second && odd[i].second < odd[i + 1].second)
            {
                possible = false;
                break;
            }
        }

        for (int i = 0; i < even.size() - 1; i++)
        {
            if (even[i].first < even[i + 1].first && even[i + 1].first < even[i].second && even[i].second < even[i + 1].second)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}