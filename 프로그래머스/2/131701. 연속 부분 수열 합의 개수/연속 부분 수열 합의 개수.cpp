#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> elements) {
    set<int> S;
        
    for(int i=0; i<elements.size(); i++) {
        int sum = 0;
        
        for(int j=0; j<elements.size(); j++) {
            sum += elements[(i+j)%elements.size()];
            S.insert(sum);
        }
    }
        
    return S.size();
}