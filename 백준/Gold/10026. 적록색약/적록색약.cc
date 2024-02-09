#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n;
char board[102][102];
bool vis[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int count1=0;
int count2=0;
void bfs(int a, int b){
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
                    if(board[x][y]==board[a][b]){
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
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>board[i][j];
            vis[i][j]=false;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!vis[i][j]) {
                bfs(i,j);
                count1++;
            }
        }
    }

    memset(vis,false,sizeof(vis));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]=='G') board[i][j]='R';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!vis[i][j]) {
                bfs(i,j);
                count2++;
            }
        }
    }
    cout<<count1<<" "<<count2;
    return 0;
}