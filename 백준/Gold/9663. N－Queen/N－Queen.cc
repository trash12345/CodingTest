#include <bits/stdc++.h>

using namespace std;

int board[15];
int cnt;
int N;

bool isValid(int r)
{
    for (int i = 0; i < r; i++)
    {
        if (board[r] == board[i] || abs(board[r] - board[i]) == r - i)
        {
            return false;
        }
    }

    return true;
}

void sol(int cur)
{
    if (cur == N)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < N; i++)
    {
        board[cur] = i;

        if (isValid(cur))
        {
            sol(cur + 1);
            board[cur] = 0;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    sol(0);
    cout << cnt;

    return 0;
}