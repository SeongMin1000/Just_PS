#include <iostream>

using namespace std;

int main(){
    int a1,a,c,n;
    cin>>a1>>a>>c>>n;

    if(a1*n+a <= c*n && a1<=c) cout<<"1";
    else cout<<"0";

    return 0;
}