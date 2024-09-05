#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> V;

    int N;
    int cntzero = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            cntzero++;
        }

        V.push_back(to_string(num));
    }

    if (cntzero == V.size())
    {
        cout << "0";
        return 0;
    }

    sort(V.begin(), V.end(), cmp);

    for (auto i : V)
    {
        cout << i;
    }

    return 0;
}