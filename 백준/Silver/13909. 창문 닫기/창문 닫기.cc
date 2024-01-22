#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int count=0;
    int n;
    cin>>n;
    
    for(int i=1; i*i<=n; i++){
        count++;
    }
    cout<<count;
    return 0;
}