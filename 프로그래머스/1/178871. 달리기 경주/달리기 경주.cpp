#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
    map<string, int> m;
    
    for(int i=0; i<players.size(); i++){
       m[players[i]]=i;
    }
    
    for(auto a: callings){
        int t=m[a];
        
        string t2=players[t-1];
        
        string tmp=players[t];
        players[t]=players[t-1];
        players[t-1]=tmp;
        
        m[a]--;
        m[t2]++;
    }
    
    for(auto a: players){
        answer.push_back(a);
    }
    return answer;
}