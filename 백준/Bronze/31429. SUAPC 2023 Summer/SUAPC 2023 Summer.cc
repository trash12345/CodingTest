#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sol[11] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
    int pen[11] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

    int N;
    cin >> N;

    cout << sol[N - 1] << " " << pen[N - 1];

    return 0;
}