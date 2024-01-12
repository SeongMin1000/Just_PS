#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[100];
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        arr[i]=i;
    }
    for(int i=0; i<m; i++){
        int a,b,tmp;
        cin>>a>>b;
        tmp=arr[a];
        arr[a]=arr[b];
        arr[b]=tmp;
    }
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}