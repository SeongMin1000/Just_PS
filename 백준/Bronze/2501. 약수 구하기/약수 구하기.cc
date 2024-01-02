#include <iostream>

using namespace std;

int arr[10001];
int main(){
    int n ,m;
    cin>>n>>m;

    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0) {
            count++;
            if(count==m){
                cout<<i;
            }
        }  
    }
    if(count<m) cout<<"0";
    return 0;
}
