#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	

    int a,b,c;
    while(1){  
        cin>>a>>b>>c;
        if(a==0) break;

        if(a>=b+c || b>=a+c || c>=a+b) cout<<"Invalid\n";
        else if(a==b && b==c) cout<<"Equilateral\n";
        else if(a==b || a==c || b==c) cout<<"Isosceles\n";
        else if(a!=b && b!=c && c!=a) cout<<"Scalene\n";
    }   
}