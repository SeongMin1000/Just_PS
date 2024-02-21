#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10][10];
int arr2[10][10];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
vector<pair<int,int>> v;

void upd(int x, int y, int dir){
    dir%=4;
    while(1){
        x+=dx[dir];
        y+=dy[dir];
        if(x<0 || y<0 || x>=n ||y>=m || arr2[x][y]==6) return;
        if(arr2[x][y]!=0) continue;
        arr2[x][y]=7;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    int area=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]!=0 && arr[i][j]!=6) v.push_back({i,j});
            if(arr[i][j]==0) area++;
        }
        
    }

    for(int i=0; i<1<<(2*v.size()); i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                arr2[j][k]=arr[j][k];
            }
        }
        int brute=i;
        for(int j=0; j<v.size(); j++){
            int dir=brute%4;
            brute/=4;
            int x=v[j].first;
            int y=v[j].second;
            if(arr[x][y]==1){
                upd(x,y,dir);
            }
            else if(arr[x][y]==2){
                upd(x,y,dir);
                upd(x,y,dir+2);
            }
            else if(arr[x][y]==3){
                upd(x,y,dir);
                upd(x,y,dir+1);
            }
            else if(arr[x][y]==4){
                upd(x,y,dir);
                upd(x,y,dir+1);
                upd(x,y,dir+2);
            }
            else{
                upd(x,y,dir);
                upd(x,y,dir+1);
                upd(x,y,dir+2);
                upd(x,y,dir+3);
            }
        }
        int val=0;
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                val+=(arr2[j][k]==0);
            }
        }
        area=min(area,val);
    }
    cout<<area;
    return 0;
}