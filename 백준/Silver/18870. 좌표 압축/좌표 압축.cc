#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v,v2;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        v.push_back(k);
        v2.push_back(k);
    }

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(int i=0; i<n; i++){
        cout<<lower_bound(v.begin(),v.end(),v2[i])-v.begin()<<" ";
    }

    return 0;
}