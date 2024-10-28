#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int minguk = A + B + C + D;

    int E, F, G, H;
    cin >> E >> F >> G >> H;

    int mansae = E + F + G + H;

    cout << max(minguk, mansae);

    return 0;
}