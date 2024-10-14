#include<bits/stdc++.h>

using namespace std;

long long cnt[10];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    int digit = 1;
    int tmp = 0;

    cin >> N;

    while(N) {
        int div = N%10;
        N /= 10;

        for(int i=0; i<div; i++) {
            cnt[i] += (N+1)*digit;
        }
        for(int i=div+1; i<10; i++) {
            cnt[i] += N*digit;
        }
        cnt[div] += N*digit + tmp + 1;
        cnt[0] -= digit;

        tmp += div*digit;
        digit *= 10;
    }

    for(int i=0; i<10; i++) {
        cout << cnt[i] << " ";
    }

    return 0;
}