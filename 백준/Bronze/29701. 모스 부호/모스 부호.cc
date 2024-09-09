#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, char> mp;

    mp.insert({".-", 'A'});
    mp.insert({"-...", 'B'});
    mp.insert({"-.-.", 'C'});
    mp.insert({"-..", 'D'});
    mp.insert({".", 'E'});
    mp.insert({"..-.", 'F'});
    mp.insert({"--.", 'G'});
    mp.insert({"....", 'H'});
    mp.insert({"..", 'I'});
    mp.insert({".---", 'J'});
    mp.insert({"-.-", 'K'});
    mp.insert({".-..", 'L'});
    mp.insert({"--", 'M'});
    mp.insert({"-.", 'N'});
    mp.insert({"---", 'O'});
    mp.insert({".--.", 'P'});
    mp.insert({"--.-", 'Q'});
    mp.insert({".-.", 'R'});
    mp.insert({"...", 'S'});
    mp.insert({"-", 'T'});
    mp.insert({"..-", 'U'});
    mp.insert({"...-", 'V'});
    mp.insert({".--", 'W'});
    mp.insert({"-..-", 'X'});
    mp.insert({"-.--", 'Y'});
    mp.insert({"--..", 'Z'});
    mp.insert({".----", '1'});
    mp.insert({"..---", '2'});
    mp.insert({"...--", '3'});
    mp.insert({"....-", '4'});
    mp.insert({".....", '5'});
    mp.insert({"-....", '6'});
    mp.insert({"--...", '7'});
    mp.insert({"---..", '8'});
    mp.insert({"----.", '9'});
    mp.insert({"-----", '0'});
    mp.insert({"--..--", ','});
    mp.insert({".-.-.-", '.'});
    mp.insert({"..--..", '?'});
    mp.insert({"---...", ':'});
    mp.insert({"-....-", '-'});
    mp.insert({".--.-.", '@'});

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;

        cout << mp[S];
    }

    return 0;
}