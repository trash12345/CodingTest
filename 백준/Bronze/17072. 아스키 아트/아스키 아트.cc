#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int R, G, B;
            cin >> R >> G >> B;

            int val = 2126 * R + 7152 * G + 722 * B;

            if (val < 510000)
            {
                cout << "#";
            }
            else if (val < 1020000)
            {
                cout << "o";
            }
            else if (val < 1530000)
            {
                cout << "+";
            }
            else if (val < 2040000)
            {
                cout << "-";
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}