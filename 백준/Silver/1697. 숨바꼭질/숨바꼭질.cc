#include <iostream>
#include <queue>

using namespace std;

int dis[100002];

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int m,n;
    cin>>n>>m;
    queue<int> q;
    fill(dis,dis+100001,-1);
    dis[n]=0;
    q.push(n);

    while(dis[m]==-1){
        int cur=q.front();
        q.pop();
        for(int nxt: {cur-1,cur+1,2*cur}){
            if(nxt<0 || nxt>100000) continue;
            if(dis[nxt]!=-1) continue;
            dis[nxt]=dis[cur]+1;
            q.push(nxt);
        }
    }
    cout<<dis[m];
    return 0;
}