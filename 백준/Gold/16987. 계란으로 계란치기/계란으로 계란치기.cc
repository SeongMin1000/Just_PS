#include <iostream>
#include <algorithm>
using namespace std;

int egg[8][2];
bool vis[8];

int n,ans;
void recur(int dep){
    if(dep==n){
        int cnt=0;
        for(int i=0; i<n; i++){
            if(egg[i][0]<=0) cnt++;
        }
        ans=max(ans,cnt);
        return;
    }

    if(egg[dep][0]<=0){
        recur(dep+1);
        return;
    } 
    bool flag=false;
    for(int i=0; i<n; i++){
        if(i==dep || egg[i][0]<=0) continue;
        egg[dep][0]-=egg[i][1];
        egg[i][0]-=egg[dep][1];
        flag=true;
        recur(dep+1);
        egg[dep][0]+=egg[i][1];
        egg[i][0]+=egg[dep][1];
    }
    if(!flag) recur(n);
}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);
   
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>egg[i][0]>>egg[i][1];
    }
    recur(0);
    cout<<ans;
    return 0;
}