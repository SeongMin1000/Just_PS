#include <bits/stdc++.h>
using namespace std;

int cnt=0;
int n,k;
int arr[1001][1001];
queue<int> q;
bool vis[1001];

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n>>k;
    for(int i=0; i<k; i++){
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }
    
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            q.push(i);
            vis[i]=true;
            while(!q.empty()){
                int cur=q.front();
                q.pop();

                for(int j=1; j<=n; j++){
                    if(arr[cur][j]==1 && vis[j]==false){
                        q.push(j);
                        vis[j]=true;
                    }
                }
            }
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}