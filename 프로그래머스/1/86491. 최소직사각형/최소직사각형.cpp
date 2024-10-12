#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int garo = -1, sero = -1;
    
    for(int i=0; i<sizes.size(); i++) {
        if(sizes[i][0] > sizes[i][1]) {
            swap(sizes[i][0], sizes[i][1]);
        }
    }
    
    for(int i=0; i<sizes.size(); i++) {
        garo = max(garo, sizes[i][0]);
        sero = max(sero, sizes[i][1]);
    }
    
    return garo * sero;
}