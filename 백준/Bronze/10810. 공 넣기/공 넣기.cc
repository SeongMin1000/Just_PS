#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[100]={0,};
    int n,m;
    cin>>n>>m;
    
    for(int i=0; i<m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        for(int j=a; j<=b; j++){
            arr[j]=c;
        }     
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}