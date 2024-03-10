#include <bits/stdc++.h>
using namespace std;

int arr[100003];
int d[100003];
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    d[1]=arr[1];
    int ans=d[1];
    for(int i=2; i<=n; i++){
        d[i]=max(arr[i],d[i-1]+arr[i]);
        ans=max(ans,d[i]);
    }
    cout<<ans;
    return 0;
}