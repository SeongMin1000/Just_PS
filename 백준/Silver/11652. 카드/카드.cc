#include <bits/stdc++.h>
using namespace std;

int n;
long long arr[100001];
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int count=1;
    long long mx=arr[0];
    int mxcnt=1;
    
    for(int i=1; i<n; i++){
        if(arr[i-1]==arr[i]) count++;
        else
            count=1;
        
        if(count>mxcnt){
            mxcnt=count;
            mx=arr[i];
        }       
    }
    cout<<mx;
    return 0;
}