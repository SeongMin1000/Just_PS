#include <iostream>
#include <queue>
using namespace std;

string board[102];
int dis[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>board[i];
    }

    for(int i=0; i<n; i++){
        fill(dis[i],dis[i]+m,-1);
    }
    
    queue<pair<int,int>> q;
    q.push({0,0});
    dis[0][0]=0;
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            int x=cur.first+dx[dir];
            int y=cur.second+dy[dir];
            if(x<0 || x>=n || y<0 || y>=m) continue;
            if(dis[x][y]>=0 || board[x][y]!='1') continue;
            dis[x][y]=dis[cur.first][cur.second]+1;
            q.push({x,y});
        }
    }
    cout<<dis[n-1][m-1]+1;
    return 0;
}