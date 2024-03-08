#include <bits/stdc++.h>
using namespace std;

int d[503][503];
int tri[503][503];
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin>>tri[i][j];
        }
    }

    d[1][1]=tri[1][1];
    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            d[i][j]=max(d[i-1][j],d[i-1][j-1])+tri[i][j];
        }
    }

    int m=0;
    for(int i=1; i<=n; i++){
        if(m<d[n][i])
            m=d[n][i];
    }
    cout<<m<<"\n";
}