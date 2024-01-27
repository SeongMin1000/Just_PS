#include <iostream>
#include <cmath>
using namespace std;

void can(int a){
    int len=pow(3,a-1);
    if(a==0) {
        cout<<"-";
        return;
    }
    else{
        can(a-1);
        for(int i=0; i<len; i++){
            cout<<" ";
        }
        can(a-1);
    }
}
int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;  
    while(cin>>n){
        can(n);
        cout<<"\n";
    }
    return 0;
}