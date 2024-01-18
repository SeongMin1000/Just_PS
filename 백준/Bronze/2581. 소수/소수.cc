#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int n,m;
    cin>>n>>m;
    
    int sum=0,count=0,min=-1;
    for(int i=n; i<=m; i++){
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            if(min==-1) min=i;
            sum+=i;
        }
        count=0;
    }

    if(min==-1) cout<<-1;
    else cout<<sum<<"\n"<<min;
    return 0;
}