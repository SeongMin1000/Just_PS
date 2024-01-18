#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int n;
    cin>>n;
    cout<<(1+(int)pow(2,n))*(1+(int)pow(2,n));
    return 0;
}