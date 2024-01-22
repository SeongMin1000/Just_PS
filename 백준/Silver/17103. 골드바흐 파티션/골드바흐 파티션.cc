#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    bool prime[1000001];
    for(int i=0; i<1000001; i++){
        prime[i]=true;
    }
    prime[0]=false,prime[1]=false;
    for(int i=2; i*i<1000001; i++){
        for(int j=2*i; j<1000001; j+=i){
            prime[j]=false;
        }
    }

    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        int count=0;
        for(int i=2; i<=m/2; i++){
            if(prime[i] && prime[m-i]){
                count++;
            }
        }
        cout<<count<<"\n";
    }  

    return 0;
}