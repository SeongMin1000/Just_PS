#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<vector<int>> q, vector<int> ans) {
    int answer = 0;
    
    vector<int> binary;
    for(auto a: q){
        int tmp=0;
        for(auto x:a){
            tmp|=(1<<(x-1));
        }
        binary.push_back(tmp);
    }
    
    for(int i=0; i<(1<<n); i++){
        if(__builtin_popcount(i)!=5) continue;
            
    
        bool tmp=true;
        for(int j=0; j<binary.size(); j++){
            if(__builtin_popcount(i & binary[j])!=ans[j]){
                tmp=false;
                break;
            }
        }
        if(tmp) answer++;
    }
    
    
    return answer;
}