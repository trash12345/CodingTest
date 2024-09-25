#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int N;
        cin >> N;

        vector<int> V;

        if (N == 0)
        {
            break;
        }

        V.push_back(N);
        N *= N;

        while (1)
        {
            string S = to_string(N);
            int len = S.size();

            while (S.size() < 8)
            {
                S = "0" + S;
            }

            N = stoi(S.substr(2, 4));

            if (find(V.begin(), V.end(), N) != V.end())
            {
                break;
            }

            V.push_back(N);
            N *= N;
        }

        cout << V.size() << "\n";
    }

    return 0;
}