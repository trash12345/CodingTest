#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 8진수를 2진수로 바꾸기
    string trans[] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string first[] = {"", "1", "10", "11", "100", "101", "110", "111"};

    string num;
    cin >> num;

    if (num == "0")
    {
        cout << "0";
        return 0;
    }

    cout << first[num[0] - '0'];

    // 맨 앞에 0이 나오는 경우 제외
    for (int i = 1; i < num.size(); i++)
    {
        cout << trans[num[i] - '0'];
    }

    return 0;
}