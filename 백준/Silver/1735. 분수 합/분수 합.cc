#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b,c,d;
    cin>>a>>b>>c>>d;
  
    int e,f;
    e=a*d+b*c;
    f=b*d;
    cout<<e/gcd(e,f)<<" "<<f/gcd(e,f);
    
    return 0;
}