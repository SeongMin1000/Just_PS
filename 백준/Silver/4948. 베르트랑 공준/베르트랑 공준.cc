#include <iostream>
using namespace std;

bool isPrime(int i){
    if(i==1) return false;
    for(int j=2; j*j<=i; j++){
        if(i%j==0) return false;
    }
    return true;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    while(1){
        cin>>n;
        if(n==0) break;
        int count=0;
        for(int i=n+1; i<=2*n; i++){
            if(isPrime(i)){
                count++;
            }
        }
        cout<<count<<"\n";
    }  
    return 0;
}