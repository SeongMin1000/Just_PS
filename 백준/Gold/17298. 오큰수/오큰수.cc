#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int>> nge;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<int> arr(n, -1);
    
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        
        while(!nge.empty()){
            if(nge.top().second>=a){
                nge.push({i,a});
                break;
            }
            arr[nge.top().first]=a;
            nge.pop();
        }
        if(nge.empty()){
            nge.push({i,a});
        }
    }

    for(auto a: arr){
        cout<<a<<" ";
    }
    return 0;
}