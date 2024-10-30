#include <bits/stdc++.h>

using namespace std;

char board[2][2];

const char Toeloop[2][2] = {{'.', 'O'}, {'P', '.'}};
const char Flip[2][2] = {{'I', '.'}, {'.', 'P'}};
const char Lutz[2][2] = {{'O', '.'}, {'.', 'P'}};

bool match(const char target[2][2], const char pattern[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (target[i][j] != pattern[i][j])
                return false;
        }
    }
    return true;
}

void rotate(char mat[2][2])
{
    char temp[2][2];

    temp[0][0] = mat[1][0];
    temp[0][1] = mat[0][0];
    temp[1][0] = mat[1][1];
    temp[1][1] = mat[0][1];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat[i][j] = temp[i][j];
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char dir;
    cin >> dir;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> board[i][j];
        }
    }

    if (dir == 'E')
    {
        rotate(board);
    }
    else if (dir == 'N')
    {
        rotate(board);
        rotate(board);
    }
    else if (dir == 'W')
    {
        rotate(board);
        rotate(board);
        rotate(board);
    }

    if (match(board, Toeloop))
    {
        cout << "T";
    }
    else if (match(board, Flip))
    {
        cout << "F";
    }
    else if (match(board, Lutz))
    {
        cout << "Lz";
    }
    else
    {
        cout << "?";
    }

    return 0;
}