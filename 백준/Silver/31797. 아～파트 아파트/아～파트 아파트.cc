#include <bits/stdc++.h>
using namespace std;

int arr[10003]={};

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=1; i<=m; i++){
        int a,b;
        cin>>a>>b;
        arr[a]=i;
        arr[b]=i;
    }

    int h=(n%(2*m)==0) ? 2*m : n%(2*m);

    int f=1;
    for(int i=1; i<10003;i++){
        if(arr[i]!=0){
            if(f==h){
                cout<<arr[i];
                break;
            }
            else f++;
        }
    }
    return 0;
}
