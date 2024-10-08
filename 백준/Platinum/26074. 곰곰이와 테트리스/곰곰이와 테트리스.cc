#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    int score[8];

    for (int i = 0; i < 8; i++)
    {
        cin >> score[i];
    }

    // 동일하게 턴을 사용하는 경우에만 ChongChong 승리
    // 8번 블럭만 놓는 경우 1X2 / 2X1 제외 GomGom 승리

    if (N * M == 2)
    {
        cout << "ChongChong";
    }
    else
    {
        cout << "GomGom";
    }

    return 0;
}