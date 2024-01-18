#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int n;
    cin>>n;

    while(n--){
        int m,q,d,n,p;
        cin>>m;
        q=m/25;
        p=m%25;
        d=p/10;
        p%=10;
        n=p/5;
        p%=5;
        cout<<q<< " "<<d<< " "<<n<< " "<<p<< " ";
    }
    
    return 0;
}