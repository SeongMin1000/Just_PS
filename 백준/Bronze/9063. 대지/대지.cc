#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	

    int n,minX=10001,minY=10001,maxX=-10001,maxY=-10001;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        if(a>maxX) maxX=a;
        if(a<minX) minX=a;
        if(b>maxY) maxY=b;
        if(b<minY) minY=b;
    }
    cout<<(maxX-minX)*(maxY-minY); 
    return 0;
}