#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[8];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int> t(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    fill(t.begin()+m,t.end(),1);
    sort(arr,arr+n);
    do{
        for(int i=0; i<n; i++){
            if(t[i]==0) cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }while(next_permutation(t.begin(),t.end()));
    return 0;
}