#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string A, B;
    cin >> A >> B;

    string S;

    for (int i = 0; i < A.size(); i++)
    {
        S += A[i];
        S += B[i];
    }

    while (S.size() != 2)
    {
        string tmp = "";

        for (int i = 0; i < S.size() - 1; i++)
        {
            tmp += char(((S[i] - '0') + (S[i + 1] - '0')) % 10 + '0');
        }

        S = tmp;
    }

    cout << S;

    return 0;
}