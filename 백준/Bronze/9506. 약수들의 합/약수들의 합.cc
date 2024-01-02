#include <iostream>

using namespace std;


int main(){
    int n;
    while(1){
        cin>>n;
        if(n==-1) break;
        int sum=0;
        int arr[10001];
        int cnt=0;

        for(int i=1,j=0; i<n; i++){
            if(n%i==0){
                cnt++;
                arr[j++]=i;
                sum+=i;
            }
        }

        if(sum==n){
            cout<<n<<" = "<<arr[0];
            for(int i=1; i<cnt; i++){
                cout<<" + "<<arr[i];
            }
            cout<<"\n";
        }
        else cout<<n<<" is NOT perfect.\n";
    }
    return 0;
}
