#include <bits/stdc++.h>

using namespace std;

int convert_time(string s){
    int h=stoi(s.substr(0,2));
    int m=stoi(s.substr(3,2));
    return h*60+m;
}

vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;
    
    vector<tuple<int, string, int>> v;
    for(auto a: plans){
        v.push_back({convert_time(a[1]), a[0], stoi(a[2])});
    }
    sort(v.begin(), v.end());
    
    stack<pair<string, int>> st;
    for(int i=0; i<v.size()-1; i++){
        auto [start, name, play]=v[i];
        auto [nextStart, _, __]=v[i+1];
        
        int gap=nextStart-start;
        if(gap>=play){
            answer.push_back(name);
            
            int remain=gap-play;
            
            while(!st.empty() && remain>0){
                auto [n,p]=st.top();
                st.pop();
                
                if(remain>=p){
                    answer.push_back(n);
                    remain-=p;
                }
                else{
                    st.push({n,p-remain});
                    remain=0;
                }
            }
        }
        else{
            st.push({name, play-gap});
        }
    }
    auto [s,n,p]=v[v.size()-1];
    answer.push_back(n);
    
    while(!st.empty()){
        answer.push_back(st.top().first);
        st.pop();
    }
    
    return answer;
}