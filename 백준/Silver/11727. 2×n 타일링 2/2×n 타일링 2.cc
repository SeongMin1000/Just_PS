#include <bits/stdc++.h>
using namespace std;

int d[1003];
int tri[503][503];
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int n;
    cin>>n;
    
    d[1]=1;
    d[2]=3;
    for(int i=3; i<=n; i++){
        d[i]=(d[i-1]+d[i-2]*2)%10007;
    }
    cout<<d[n];
    return 0;
}