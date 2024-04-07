#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[1001][1001];
int ans[1001][1001];
queue<pair<int,int>> q;
int x[4]={1,0,-1,0};
int y[4]={0,1,0,-1};

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int z,p;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]==2){
                z=i;
                p=j;
            }
        }    
    }


    q.push({z,p});
    ans[z][p]=1;
    while(!q.empty()){
        pair<int,int> cur=q.front();
        q.pop();
        for(int k=0; k<4; k++){
            int dx=cur.first+x[k];
            int dy=cur.second+y[k];
            if(dx>=0 && dy>=0 && dx<n && dy<m){
                if(ans[dx][dy]==0 && arr[dx][dy]!=0){
                    ans[dx][dy]=ans[cur.first][cur.second]+1;
                    q.push({dx,dy});
                }
            }
        }
    }

     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0) cout<<0<<" ";
            else cout<<ans[i][j]-1<<" ";
        }
        cout<<"\n";
     }
            
    return 0;
}