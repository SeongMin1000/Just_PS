#include <bits/stdc++.h>
using namespace std;

int weight[100003];

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>weight[i];
    }
    sort(weight, weight+n);

    int maxW=0;
    for(int i=1; i<=n; i++){
        maxW=max(maxW, weight[n-i]*i);
    }
    cout<<maxW;
    return 0;
}