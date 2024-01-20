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

    long long a,b;
    cin>>a>>b;
  
    int max=gcd(a,b);
    cout<<a*b/max<<"\n";
     
    return 0;
}