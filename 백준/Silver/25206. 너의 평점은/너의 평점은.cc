#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	    
    string grade,alp;
    double n;
    double Nsum=0.0;
    double sum=0.0;
    double temp;
    for(int i=0; i<20; i++){
        cin>>grade>>n>>alp;
        if(alp=="P") continue;
        Nsum+=n;

        if(alp=="F") continue;
        if(alp[0]=='A') temp=4.0;
        else if(alp[0]=='B') temp=3.0;
        else if(alp[0]=='C') temp=2.0;
        else temp=1.0;

        if(alp[1]=='+') temp+=0.5;

        sum+=n*temp;
    }
    
    cout<<sum/Nsum;
	return 0;
}