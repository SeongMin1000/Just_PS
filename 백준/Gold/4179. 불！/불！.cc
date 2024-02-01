#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

string board[1002];
int dis1[1002][1002];
int dis2[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int m,n;
    cin>>n>>m;
    queue<pair<int,int>> q1;
    queue<pair<int,int>> q2;

    for(int i=0; i<n; i++) cin>>board[i];

    for(int i=0; i<n; i++){
        fill(dis1[i],dis1[i]+m,-1);
        fill(dis2[i],dis2[i]+m,-1);     
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j]=='F'){
                q1.push({i,j});
                dis1[i][j]=0;
            }
            if(board[i][j]=='J'){
                q2.push({i,j});
                dis2[i][j]=0;
            }
        }
    }

    while(!q1.empty()){
        pair<int,int> cur = q1.front();
        q1.pop();
        for(int dir=0; dir<4; dir++){
            int x=cur.first+dx[dir];
            int y=cur.second+dy[dir];
            if(x<0 || x>=n || y<0 || y>=m) continue;
            if(dis1[x][y]>=0 || board[x][y]=='#') continue;
            dis1[x][y]=dis1[cur.first][cur.second]+1;
            q1.push({x,y});
        }
    }

    while(!q2.empty()){
        pair<int,int> cur=q2.front();
        q2.pop();
        for(int dir=0; dir<4; dir++){
            int x=cur.first+dx[dir];
            int y=cur.second+dy[dir];
            if(x<0 ||x>=n || y<0 || y>=m){
                cout<<dis2[cur.first][cur.second]+1;
                return 0;
            }
            if(dis2[x][y]>=0 || board[x][y]=='#') continue;
            if(dis2[cur.first][cur.second]+1>=dis1[x][y] && dis1[x][y]!=-1) continue;
            dis2[x][y]=dis2[cur.first][cur.second]+1;
            q2.push({x,y});
        }
    }
       
    cout<<"IMPOSSIBLE";
    return 0;
}