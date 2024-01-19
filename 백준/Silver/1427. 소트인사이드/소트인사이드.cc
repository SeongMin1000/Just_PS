#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin>>str;
    sort(str.begin(),str.end(),greater<char>());
    cout<<str;
   
    return 0;
}