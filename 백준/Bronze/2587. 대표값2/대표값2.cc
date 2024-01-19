#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int arr[5];
    int sum=0;
    for(int i=0; i<5; i++){
        int n;
        cin>>n;
        sum+=n;
        arr[i]=n;
    }

    sort(arr,arr+5);
    cout<<sum/5<<"\n"<<arr[2];
    return 0;
}