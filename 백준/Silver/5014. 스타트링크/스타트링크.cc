#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

queue<int> q;
int floor[1000001]={0,};
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int f,s,g,u,d;
    cin>>f>>s>>g>>u>>d;

    q.push(s);
    floor[s]=1;
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        if(cur==g){
            cout<<floor[cur]-1;
            return 0;
        }

        int up=cur+u;
        int down=cur-d;
        if(up<=f && floor[up]==0){
            floor[up]=floor[cur]+1;
            q.push(up);
        }
        if(down>0 && floor[down]==0){
            floor[down]=floor[cur]+1;
            q.push(down);
        }
    }
    cout<<"use the stairs";
    return 0;
}