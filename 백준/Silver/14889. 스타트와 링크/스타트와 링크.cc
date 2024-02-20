#include <bits/stdc++.h>
using namespace std;

int n;
int board[20][20];
bool check[21];
int mx=1000000000;

void bt(int result, int dep){
    if(result==n/2){
        int start=0,link=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(check[i]==true && check[j]==true) start+=board[i][j];
                if(check[i]==false && check[j]==false) link+=board[i][j];
            }
        }
        int temp=abs(start-link);
        if(mx>temp) mx=temp;
        return;
    }
    for(int i=dep; i<n; i++){
        check[i]=true;
        bt(result+1,i+1);
        check[i]=false;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)   
            cin>>board[i][j];   
    }
    bt(0,0);
    cout<<mx;
    return 0;
}