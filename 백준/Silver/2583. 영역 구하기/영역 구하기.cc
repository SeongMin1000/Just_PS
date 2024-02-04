#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int board[100][100];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
vector<int> v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m,n,k;
	cin>>m>>n>>k;
    
    for(int i=0; i<k; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int x=a; x<c; x++){
            for(int y=b; y<d; y++){
                board[y][x]=1;
            }
        }
    }

    queue<pair<int,int>> q;
    int cnt=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]) continue;
            q.push({i,j});
            board[i][j]=1;
            int area=1;
            while(!q.empty()){
                pair<int,int> cur=q.front();
                q.pop();
                for(int i=0; i<4; i++){
                    int ax=cur.first+dx[i];
                    int ay=cur.second+dy[i];
                    if(ax<0 || ay<0 || ax>=m || ay>=n) continue;
                    if(board[ax][ay]) continue;
                    area++;
                    board[ax][ay]=1;
                    q.push({ax,ay});
                }
            }
            v.push_back(area);
            cnt++;
        }
    }
    sort(v.begin(),v.end());
    cout<<cnt<<"\n";
    for(auto a:v){
        cout<<a<<" ";
    }
    return 0;
}