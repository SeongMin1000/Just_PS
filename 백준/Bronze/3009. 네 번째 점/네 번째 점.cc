#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int x[3],y[3];

    for(int i=0; i<3; i++){
        int n,m;
        cin>>n>>m;
        x[i]=n;
        y[i]=m;
    }

    if(x[0]==x[1]) cout<<x[2]<<" ";
    else if(x[1]==x[2]) cout<<x[0]<<" ";
    else cout<<x[1]<<" ";

    if(y[0]==y[1]) cout<<y[2]<<" ";
    else if(y[1]==y[2]) cout<<y[0]<<" ";
    else cout<<y[1]<<" ";
    
    return 0;
}