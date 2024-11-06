#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string arr = "WelcomeToSMUPC";

    int N;
    cin >> N;

    N--;

    cout << arr[N % 14];

    return 0;
}