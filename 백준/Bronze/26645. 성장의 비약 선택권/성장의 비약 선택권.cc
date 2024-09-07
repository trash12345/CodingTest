#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    if (N < 206)
    {
        cout << "1";
    }
    else if (N < 218)
    {
        cout << "2";
    }
    else if (N < 229)
    {
        cout << "3";
    }
    else
    {
        cout << "4";
    }

    return 0;
}