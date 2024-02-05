#include <iostream>
using namespace std;

int n;
bool vis1[40];
bool vis2[40];
bool vis3[40];
int count=0;
void recur(int dep){
    if(dep==n){
        count++;
        return;
    }
    for(int i=0; i<n; i++){
        if(vis1[i] || vis2[i+dep] || vis3[dep-i+n-1]) continue;
        vis1[i]=1;
        vis2[i+dep]=1;
        vis3[dep-i+n-1]=1;
        recur(dep+1);
        vis1[i]=0;
        vis2[i+dep]=0;
        vis3[dep-i+n-1]=0;
    }
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin>>n;
    recur(0);
    cout<<count;
    return 0;
}