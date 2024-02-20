#include <bits/stdc++.h>
using namespace std;

int n;
int mx=-1000000001;
int mn=1000000001;
int opr[11];
int op[4];

void bt(int result, int dep){
    if(dep==n){
        if(result>mx) mx=result;
        if(result<mn) mn=result;
        return;
    }
    for(int i=0; i<4; i++){
        if(op[i]>0){
            op[i]--;
            if(i==0) bt(result+opr[dep],dep+1);
            else if(i==1) bt(result-opr[dep],dep+1);
            else if(i==2) bt(result*opr[dep],dep+1);
            else bt(result/opr[dep],dep+1);
            op[i]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){   
        cin>>opr[i];   
    }
    for(int i=0; i<4; i++){
        cin>>op[i];
    }
    bt(opr[0],1);
    cout<<mx<<"\n"<<mn;
    return 0;
}