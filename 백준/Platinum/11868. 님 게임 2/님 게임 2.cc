#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int grundy = 0;

    while (N--)
    {
        int P;
        cin >> P;

        grundy ^= P;
    }

    if (grundy)
    {
        cout << "koosaga";
    }
    else
    {
        cout << "cubelover";
    }

    return 0;
}