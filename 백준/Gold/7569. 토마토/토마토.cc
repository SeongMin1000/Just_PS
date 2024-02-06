#include <iostream>
#include <queue>
using namespace std;

int board[102][102][102];
int dis[102][102][102];

int n,m,h;
int dx[6]={1,0,-1,0,0,0};
int dy[6]={0,1,0,-1,0,0};
int dz[6]={0,0,0,0,1,-1};
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    queue<pair<int,pair<int,int>>> q;
    cin>>m>>n>>h;
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                cin>>board[i][j][k];
                if(board[i][j][k]==1) q.push({i,{j,k}});
                if(board[i][j][k]==0) dis[i][j][k]=-1;
            }
        }
    }
    
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        for(int i=0; i<6; i++){
            int z=cur.first+dz[i];
            int y=cur.second.first+dy[i];
            int x=cur.second.second+dx[i];
            if(x<0 || y<0 || z<0 || x>=m || y>=n || z>=h) continue;
            if(dis[z][y][x]>=0) continue;
            dis[z][y][x]=dis[cur.first][cur.second.first][cur.second.second]+1;
            q.push({z,{y,x}});
        }
    }

    int day=0;
    for (int i=0; i<h; i++) {
		for (int j=0; j <n; j++) {
			for (int k=0; k<m; k++) {
				if (dis[i][j][k] == -1) {
					cout<<-1;
					return 0;
				}
				day=max(day, dis[i][j][k]);
			}
		}
	}
	cout<<day;
    return 0;
}