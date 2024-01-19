#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[10000];
	int n,k,x;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x;
        arr[i]=x;    
    }
    sort(arr,arr+n);

    cout<<arr[n-k];
   
    return 0;
}