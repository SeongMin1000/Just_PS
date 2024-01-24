#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        long long ans=1;
        int r=1;
        for(int j=b; j>b-a; j--){
            ans*=j;
            ans/=r;
            r++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}