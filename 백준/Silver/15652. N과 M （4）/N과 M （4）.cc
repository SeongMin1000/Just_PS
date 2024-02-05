#include <iostream>
using namespace std;

int n,m;
int arr[10];
void recur(int k,int a){
    if(a==m){
        for(int i=0; i<m; i++) cout<<arr[i]<<" ";
        cout<<"\n";
        return;
    }

    for(int i=k; i<=n; i++){
        arr[a]=i;
        recur(i,a+1);
    }
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin>>n>>m;
    recur(1,0);
    return 0;
}