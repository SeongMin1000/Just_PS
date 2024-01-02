#include <iostream>

using namespace std;

int main(){
    int n;
    int b;
    cin>>n>>b;
    int idx=0;
    int ans[10000];
    
    while(n>=b){
        ans[idx++] = n%b;
        n/=b;
    }
    ans[idx]=n;

    for(int i=idx; i>=0; i--){
        if(ans[i]<10) cout<<ans[i];
        else cout<<(char)('A'-10+ans[i]);
    }
    return 0;
}
