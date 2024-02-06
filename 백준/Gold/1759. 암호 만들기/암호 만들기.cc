#include <iostream>
#include <algorithm>
using namespace std;

char arr[15];
char v[15];
bool vis[15];

int n,m;
void recur(int k,int dep){
    if(dep==m){
        int acnt=0;
        int bcnt=0;
        for(int i=0; i<m; i++){
            if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u' ) acnt++;
            else bcnt++;               
        }
        for(int i=0; i<m; i++){
            if(acnt>=1 && bcnt>=2) cout<<v[i];
            else return;
        }
        cout<<"\n";
        
    }
    for(int i=k; i<n; i++){
        if(vis[i]) continue;
        vis[i]=1;
        v[dep]=arr[i];
        recur(i+1,dep+1);
        vis[i]=0;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);
   
    cin>>m>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    recur(0,0);
    return 0;
}