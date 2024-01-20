#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<string> arr1;
    int n,m;
    cin>>n>>m;
    int count=0;

    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        arr1.push_back(a);
    }

    sort(arr1.begin(),arr1.end());
    
    for(int i=0; i<m; i++){
        string b;
        cin>>b;
        if(binary_search(arr1.begin(),arr1.end(),b)) count++;
    }
    cout<<count;
    
    return 0;
}