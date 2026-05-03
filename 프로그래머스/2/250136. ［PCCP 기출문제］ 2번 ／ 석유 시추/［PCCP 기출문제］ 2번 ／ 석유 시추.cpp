#include <string>
#include <vector>
#include <bits/stdc++.h>

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

using namespace std;

int solution(vector<vector<int>> land) {
    int answer = 0;
    
    int n=land.size();
    int m=land[0].size();
    
    vector<vector<int>> group(n, vector<int>(m,0));
    vector<int> group_size;
    group_size.push_back(0); 
    
    int group_id=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(land[i][j]!=0 && group[i][j]==0){
                group_id++;
                
                queue<pair<int,int>> q;
                q.push({i,j});
                group[i][j]=group_id;
                
                int cnt=1;
                while(!q.empty()){
                    auto cur=q.front();
                    q.pop();
                    
                    for(int t=0; t<4; t++){
                        int x=cur.second+dx[t];
                        int y=cur.first+dy[t];
                        
                        if(x<0 || y<0 || x>=m || y>=n) continue;
                        if(group[y][x]!=0 || land[y][x]==0) continue;
                        
                        q.push({y,x});
                        group[y][x]=group_id;
                        cnt++;
                    }
                }
                group_size.push_back(cnt);
            }
        }
    }
    
    for(int c=0; c<m; c++){
        int tmp=0;
        set<int> used;
        for(int r=0; r<n; r++){
            int id = group[r][c]; 
            if(id != 0){ 
                used.insert(id); 
            }   
        }
        
        for(auto a: used){
            tmp+=group_size[a];
        }
        answer=max(tmp,answer);
    }
    
    return answer;
}