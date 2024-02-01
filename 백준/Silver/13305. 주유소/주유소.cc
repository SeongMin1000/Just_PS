#include <iostream>
#include <algorithm>

using namespace std;

long long cost[100001],dis[100001],minp[100001],ans=0;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin>>n;
    for(int i=0; i<n-1; i++) cin>>dis[i];
    for(int i=0; i<n; i++) cin>>cost[i];
    
    minp[0]=cost[0];
    for(int i=1; i<n; i++){
        minp[i]=min(cost[i],minp[i-1]);
    }

    for(int i=0; i<n-1; i++) ans+=dis[i]*minp[i];
    cout<<ans;
    return 0;
}