#include <iostream>
using namespace std;

int n,m;
int arr[20];
int count=0;
void recur(int dep,int tot){
    if(dep==n){
        if(tot==m) count++;
        return;
    }
    recur(dep+1,tot);
    recur(dep+1,tot+arr[dep]);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>arr[i];
    recur(0,0);
    if(m==0) count--;
    cout<<count;
    return 0;
}