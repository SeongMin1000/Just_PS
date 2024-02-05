#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[8];
vector<int> v;
int n,m;
void recur(int dep){
    if(dep==m){
        for(int i=0; i<m; i++) cout<<v[i]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
        recur(dep+1);
        v.pop_back();
    }
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    recur(0);
    return 0;
}