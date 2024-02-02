#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    sort(arr,arr+n);

    int left=0,right=n-1,count=0;
    while(left<right){
        if(arr[left]+arr[right]==x){
            left++;
            right--;
            count++;
        }
        else if(arr[left]+arr[right]>x) right--;
        else left++;

    }
    cout<<count;
    return 0;
}