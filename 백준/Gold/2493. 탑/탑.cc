#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int>> tower;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int h;
        cin>>h;

        while(!tower.empty()){
            if(tower.top().first>h){
                cout<<tower.top().second<<" ";
                break;
            }
            tower.pop();
        }
        if(tower.empty()){
            cout<<0<<" ";
        }
        tower.push({h, i+1});
    }
    return 0;
}