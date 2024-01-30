#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int board[1002][1002];
int dis[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int m,n;
    cin>>m>>n;
    queue<pair<int,int>> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>board[i][j];
            if(board[i][j]==1) q.push({i,j});
            if(board[i][j]==0) dis[i][j]=-1;
        }   
    }

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            int x=cur.first+dx[dir];
            int y=cur.second+dy[dir];
            if(x<0 || x>=n || y<0 || y>=m) continue;
            if(dis[x][y]>=0) continue;
            dis[x][y]=dis[cur.first][cur.second]+1;
            q.push({x,y});
        }
    }

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dis[i][j]==-1){
                cout<<-1;
                return 0;
            }
            ans=max(ans,dis[i][j]);
        }
    }
    cout<<ans;
    return 0;
}