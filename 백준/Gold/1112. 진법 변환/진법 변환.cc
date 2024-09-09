#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, b;
    bool ispositive = true;
    cin >> x >> b;

    if (x == 0)
    {
        cout << "0";
        return 0;
    }

    if (x < 0 && b > 0)
    {
        ispositive = false;
        x = -x;
    }

    vector<char> ans;

    while (x)
    {
        int q = x / b;
        int r = x % b;

        if (r < 0)
        {
            q++;
            r -= b;
        }

        x = q;

        ans.push_back(r + '0');
    }

    if (!ispositive)
    {
        cout << '-';
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }

    return 0;
}