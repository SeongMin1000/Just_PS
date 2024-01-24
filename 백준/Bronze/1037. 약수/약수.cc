#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int v[51];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v,v+n);

    cout<<v[0]*v[n-1];
    return 0;
}