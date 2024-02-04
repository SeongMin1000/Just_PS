#include <iostream>
using namespace std;

int arr[129][129];
int count=0;
int blue=0;
void recur(int x, int y, int n) {
	bool cut=false;
    int first=arr[x][y];
    for(int i=x; i<x+n; i++){
        for(int j=y; j<y+n; j++){
            if(first!=arr[i][j]){
                cut=true;
                break;
            }
        }
    }

    if(cut){
        recur(x,y,n/2);
        recur(x,y+n/2,n/2);
        recur(x+n/2,y,n/2);
        recur(x+n/2,y+n/2,n/2);
    }
    else{
        if(first==1) blue++;
        else count++;
    }

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>arr[i][j];
    }
	recur(0,0,n);
    cout<<count<<"\n"<<blue;
}