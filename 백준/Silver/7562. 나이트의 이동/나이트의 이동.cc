#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

//int arr[300][300]={0};
int vis[300][300]={0};
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int a,b; cin>>a>>b;
        int x,y; cin>>x>>y;
        //memset(arr,0,sizeof(arr));
        memset(vis,0,sizeof(vis));
        vis[a][b]=1;
        queue<pair<int,int>> q;
        q.push({a,b});
        while(!q.empty()){
            pair<int,int> cur=q.front();
            q.pop();

            for(int i=0; i<8; i++){
                int ax=cur.first+dx[i];
                int ay=cur.second+dy[i];

                if(ax<0 ||ay<0 || ax>=n || ay>=n) continue;
                if(vis[ax][ay]) continue;
                vis[ax][ay]=vis[cur.first][cur.second]+1;
                q.push({ax,ay});
            }

        }
        cout<<vis[x][y]-1<<"\n";
    }
    return 0;
}