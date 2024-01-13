#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	    
    string n,tmp;
    cin>>n;

    tmp=n;
    reverse(n.begin(),n.end());
    if(tmp==n) cout<<1;
    else cout<<0;
    
	return 0;
}