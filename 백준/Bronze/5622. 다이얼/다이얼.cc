#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	    
    string n;
    cin>>n;
    int sum=0;
    
    for(int i=0; n[i]; i++){
        sum+=(int)((n[i]-'A')/3)+3;
        if(n[i]=='S' || n[i]=='V' || n[i]=='Y' || n[i]=='Z') sum--;
    }

    cout<<sum;
	return 0;
}