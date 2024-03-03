#include <bits/stdc++.h>
using namespace std;

string arr[1001];

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    string n;
    cin>>n;
    for(int i=0; i<n.size(); i++){
        for(int j=i; j<n.size(); j++){
            arr[i]+=n[j];
        }
    }
    sort(arr,arr+arr->length());
    for(int i=0; i<n.size(); i++)
        cout<<arr[i]<<"\n";
    return 0;
}