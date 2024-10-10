#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int cnt = 0;
    int num = 666;
    cin >> N;

    while (1)
    {
        if (to_string(num).find("666") != -1)
        {
            cnt++;
        }
        
        if (cnt == N)
        {
            cout << num;
            break;
        }
        num++;
    }

    return 0;
}