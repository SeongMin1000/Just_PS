#include <bits/stdc++.h>
using namespace std;

int a[100004], d[100004];
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int n,m;
    cin>>n>>m;
    d[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        d[i]=d[i-1]+a[i];
    }

    while(m--){
        int i,j;
        cin>>i>>j;
        cout<<d[j]-d[i-1]<<"\n";
    }
    
    return 0;
}