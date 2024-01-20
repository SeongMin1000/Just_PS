#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    set<string> arr1;
    int n;
    cin>>n;
    int count=0;

    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        if(b=="enter") arr1.insert(a);
        else arr1.erase(a);
    }  
    for(auto a=arr1.rbegin(); a!=arr1.rend(); a++){
        cout<<*a<<"\n";
    }
    return 0;
}