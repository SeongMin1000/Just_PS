#include <bits/stdc++.h>
using namespace std;

int cnt=0;
int n,k;
int arr[101][101];
queue<int> q;
bool vis[101];

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
    
    q.push(1);
    vis[1]=true;
    while(!q.empty()){
        int cur=q.front();
        q.pop();

        for(int i=1; i<=n; i++){
            if(arr[cur][i]==1 && vis[i]==false){
                q.push(i);
                vis[i]=true;
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}