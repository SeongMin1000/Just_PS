#include <iostream>
#include <set>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    set<int> check;
    for(int i=1; i<=30; i++){
        check.insert(i);
    }

    for(int i=0; i<28; i++){
        int a;
        cin>>a;
        check.erase(a);
    }

    for(auto i: check){
        cout<<i<<"\n";
    }
    return 0;
}