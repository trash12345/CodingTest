#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int ans = 0;
    a--; b--;
    
    while(a != b) {
        ans++;
        a /= 2;
        b /= 2;
    }

    return ans;
}