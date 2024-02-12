#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int r,c;
int board[42][42];
int board2[12][12];

void rotate(){
    int tmp[12][12];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            tmp[i][j]=board2[i][j];
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            board2[i][j]=tmp[r-1-j][i];
        }
    }
    swap(r,c);   
}

bool pas(int x, int y){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(board[x+i][y+j]==1 && board2[i][j]==1)
                return false;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(board2[i][j]==1)
                board[x+i][y+j]=1;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n>>m>>k;
    while(k--){
        cin>>r>>c;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>board2[i][j];
            }
        }
        
        for(int rot=0; rot<4; rot++){
            bool is_pas=false;
            for(int x=0; x<=n-r; x++){
                if(is_pas) break;
                for(int y=0; y<=m-c; y++){
                    if(pas(x,y)){
                        is_pas=true;
                        break;
                    }
                }
            }
            if(is_pas) break;
            rotate();
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cnt+=board[i][j];
    cout<<cnt;
    return 0;
}