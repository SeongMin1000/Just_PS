#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int arr[50][50]={0};
int vis[50][50]={0};
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int a;
    cin>>a;
    while(a--){
        int cnt=0;
        int n,m,k;
        cin>>m>>n>>k;
        memset(arr,0,sizeof(arr));
        memset(vis,0,sizeof(vis));
        while(k--){
            int x,y;
            cin>>x>>y;
            arr[x][y]=1;
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j]==0 || vis[i][j]) continue;
                cnt++;
                queue<pair<int,int>> q;
                vis[i][j]==1;
                q.push({i,j});

                while(!q.empty()){
                    pair<int,int> cur=q.front();
                    q.pop();
                    for(int i=0; i<4; i++){
                        int x=cur.first+dx[i];
                        int y=cur.second+dy[i];
                        if(x<0 || x>=m || y<0 ||y>=n) continue;
                        if(vis[x][y] || arr[x][y]!=1) continue;
                        vis[x][y]=1;
                        q.push({x,y});
                    }
                }         
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}