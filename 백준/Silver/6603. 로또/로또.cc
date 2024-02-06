#include <iostream>
#include <algorithm>
using namespace std;

int arr[13];
int v[6];
int n;
void recur(int k,int dep){
    if(dep==6){
        for(int i=0; i<6; i++) cout<<v[i]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=k; i<n; i++){
        v[dep]=arr[i];
        recur(i+1,dep+1);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
	//cin.tie(0); //cout.tie(0);
    while(1){
        cin>>n;
        if(n==0) break;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        recur(0,0);
        cout<<"\n";
    }
    return 0;
}