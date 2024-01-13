#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int n;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        cout<<str.front()<<str.back()<<"\n";
    }
	return 0;
}