#include <iostream>
#include <set>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    multiset<int> sett;
    int n,v;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        sett.insert(a);
    }
    cin>>v;
    cout<<sett.count(v);
    return 0;
}