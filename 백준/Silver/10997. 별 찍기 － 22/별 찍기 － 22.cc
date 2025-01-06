#include <bits/stdc++.h>
using namespace std;

void printStar(vector<vector<string>> &star, int n, int x, int y){
    int h=4*n-1;
    int w=4*n-3;

    for(int i=y; i<y+w; i++){
      star[x][i]="*";  
      star[x+h-1][i]="*";
    } 
    if(x!=0) star[x][y+w]='*';
    for(int i=x; i<x+h; i++) {
        star[i][y]="*";
        if(i-x>1){
            star[i][y+w-1]="*";
        }
    }
    if(n==1){
        star[x][y]="*";
        star[x+1][y]="*";
        star[x+2][y]="*";
        return;
    }
    
    printStar(star, n-1, x+2, y+2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;

    if(n==1){
        cout<<"*";
        return 0;
    }
    
    vector<vector<string>> star(4*n-1, vector<string>(4*n-3, " "));
    printStar(star, n, 0, 0);

    for(int i=0; i<4*n-1; i++){
        if(i==1){
            cout<<"*\n";
            continue;
        }
        
        for(int j=0; j<4*n-3; j++){
            cout<<star[i][j];
        }
        cout<<"\n";
    }
    return 0;
}