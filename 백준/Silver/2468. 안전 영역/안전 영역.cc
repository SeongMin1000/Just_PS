#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n;
int board[102][102];
bool vis[102][102]={0,};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int maxH=-1;
int area=0;
void bfs(int a, int b, int c){
    queue<pair<int,int>> q;
    q.push({a,b});
    vis[a][b]=true;

    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int x=cur.first+dx[i];
            int y=cur.second+dy[i];
            if(x>=0 && y>=0 && x<n && y<n){
                if(vis[x][y]==false){
                    if(board[x][y]>c){
                        vis[x][y]=true;
                        q.push({x,y});
                    }
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>board[i][j];
            if(maxH<=board[i][j]) maxH=board[i][j];
        }
    }

    for(int i=0; i<=maxH; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i<board[j][k] && !vis[j][k]){
                    bfs(j,k,i);
                    area++;
                }
            }
        }
        if(ans<area) ans=area;
        memset(vis,0,sizeof(vis));
        area=0;

    }
    cout<<ans;
    return 0;
}