#include <iostream>
using namespace std;

long long factorial(int a){
    if(a==1 || a==0) return 1;
    else return factorial(a-1)*a;
}

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}