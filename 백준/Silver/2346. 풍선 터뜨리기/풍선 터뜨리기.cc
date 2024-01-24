#include <iostream>
#include <deque>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    deque<pair<int,int>> d;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        d.push_back({x,i+1});
    }

    while(!d.empty()){
        int cur=d.front().first;
        cout<<d.front().second<<" ";
        d.pop_front();

        if(d.empty()) break;

        if(cur>0){
            for(int i=0; i<cur-1; i++){
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else{
            for(int i=0; i<(-1)*cur; i++){
                d.push_front(d.back());
                d.pop_back();
            }
        }

    }
    return 0;
}