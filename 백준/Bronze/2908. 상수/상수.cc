#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    
    string str1,str2;
    cin>>str1>>str2;
    swap(str1[0],str1[2]);
    swap(str2[0],str2[2]);
    cout<<max(str1,str2);
	return 0;
}