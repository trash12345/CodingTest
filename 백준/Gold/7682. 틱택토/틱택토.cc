#include <bits/stdc++.h>

using namespace std;

bool win(string S, char c)
{
    // 가로
    for (int i = 0; i < 9; i += 3)
    {
        if (S[i] == c && S[i + 1] == c && S[i + 2] == c)
        {
            return true;
        }
    }

    // 세로
    for (int i = 0; i < 3; i++)
    {
        if (S[i] == c && S[i + 3] == c && S[i + 6] == c)
        {
            return true;
        }
    }

    // 대각
    if (S[0] == c && S[4] == c && S[8] == c)
    {
        return true;
    }
    if (S[2] == c && S[4] == c && S[6] == c)
    {
        return true;
    }

    return false;
}

bool sol(string S)
{
    int cntX = 0;
    int cntO = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'X')
        {
            cntX++;
        }
        if (S[i] == 'O')
        {
            cntO++;
        }
    }

    int dif = abs(cntX - cntO);

    // 차이가 2개 이상이거나 O가 더 많으면 잘못된 배열
    if (cntO > cntX || dif >= 2)
    {
        return false;
    }

    // 꽉 찬 상황에선 X가 이겨야만 함
    if (cntX + cntO == 9)
    {
        if (win(S, 'O'))
        {
            return false;
        }
        return true;
    }
    else
    {
        // 개수가 같으면 O승
        if (cntX == cntO)
        {
            if (win(S, 'O') && !win(S, 'X'))
            {
                return true;
            }
            return false;
        }
        // X가 한 개 더 많으면 X승
        else if (cntX == cntO + 1)
        {
            if (!win(S, 'O') && win(S, 'X'))
            {
                return true;
            }
            return false;
        }
    }

    return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        string tic;
        cin >> tic;

        if (tic == "end")
        {
            break;
        }

        if (sol(tic))
        {
            cout << "valid\n";
        }
        else
        {
            cout << "invalid\n";
        }
    }

    return 0;
}