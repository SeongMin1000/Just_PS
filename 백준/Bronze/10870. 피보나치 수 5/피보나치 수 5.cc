#include <iostream>
using namespace std;

long long fibo(int a){
    if(a==0) return 0;
    else if(a==1) return 1;
    else return fibo(a-1)+fibo(a-2);
    
}

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}