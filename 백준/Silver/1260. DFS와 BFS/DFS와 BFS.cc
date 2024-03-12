#include <bits/stdc++.h>
using namespace std;

int n,m,v;
int arr[1001][1001];
bool vis[1001];

void dfs(int v){
    vis[v]=1;
    cout<<v<<" ";
    for(int i=1; i<=n; i++){
        if(vis[i]==0 && arr[v][i]==1){
            dfs(i);
        }
    }
}

void bfs(int v){
    queue<int> q;
    q.push(v);
    while(!q.empty()){
        int cur=q.front();
        vis[cur]=1;
        cout<<cur<<" ";
        q.pop();
        for(int i=1; i<=n; i++){
            if(arr[cur][i]==1 && vis[i]==0){
                q.push(i);
                vis[i]=1;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n>>m>>v;
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    dfs(v);
    cout<<"\n";
    memset(vis,0,sizeof(vis));
    bfs(v);
    return 0;
}