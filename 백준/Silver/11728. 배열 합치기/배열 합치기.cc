#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[1000001];
int arr2[1000001];
int arr3[2000001];

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    int a=0,b=0;
    for(int i=0; i<n+m; i++){
        if(b==m) arr3[i]=arr[a++];
        else if(a==n) arr3[i]=arr2[b++];
        else if(arr[a]<=arr2[b]) arr3[i]=arr[a++];
        else arr3[i]=arr2[b++];
    }
    for(int i=0; i<n+m; i++) cout<<arr3[i]<<" ";
}