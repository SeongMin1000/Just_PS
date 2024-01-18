#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	

    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180){
        if(a==b && b==c) cout<<"Equilateral";
        else if(a==b || a==c || b==c) cout<<"Isosceles";
        else cout<<"Scalene";
    }
    else cout<<"Error";
}