#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long n,m;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>m;
        if(m<3){
            cout<<"2\n";
            continue;
        }
        else if(m==3){
            cout<<"3\n";
            continue;
        }

        while(1){
            long long ans=0;
            for(long long j=2; j*j<=m; j++){
                if(m%j==0){
                    ans++;
                    break;
                }            
            }
            if(ans==0){
                    cout<<m<<"\n";
                    break;
                }
            m++;
        }
    }
    
    return 0;
}