#include <iostream>
#include <algorithm>
using namespace std;

int arr[8];
int v[8];
int n,m;
bool vis[8];
void recur(int dep){
    if(dep==m){
        for(int i=0; i<m; i++) cout<<v[i]<<" ";
        cout<<"\n";
        return;
    }
    int pre=0;
    for(int i=0; i<n; i++){
        if(vis[i] || pre==arr[i]) continue;
        vis[i]=1;
        pre=arr[i];
        v[dep]=arr[i];
        recur(dep+1);
        vis[i]=0;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);
   
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    recur(0);
    return 0;
}