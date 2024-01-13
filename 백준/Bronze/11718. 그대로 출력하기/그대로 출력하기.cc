#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	    
    string n;
    while(1){
        getline(cin,n);
        if(n=="") break;
        cout<<n<<"\n";
    }
	return 0;
}