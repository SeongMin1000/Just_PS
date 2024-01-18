#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    unsigned int n;
    cin>>n;
    cout<<n*(n+1)*2-(n-1)*n*2;
    return 0;
}