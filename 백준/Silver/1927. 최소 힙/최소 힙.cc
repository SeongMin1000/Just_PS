#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> mh; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int h;
        cin>>h;

        if(h!=0){
            mh.push(h);
        }
        else{
            if(mh.empty()){
                cout<<0<<"\n";
            }
            else{
                cout<<mh.top()<<"\n";
                mh.pop();
            }
        }
    }
    return 0;
}