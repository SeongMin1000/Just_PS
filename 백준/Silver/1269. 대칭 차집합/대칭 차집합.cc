#include <iostream>
#include <set>
using namespace std;


int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    set<int> s;
    for(int i=1; i<=n; i++){
        int input;
        cin>>input;
        s.insert(input);
    }
    for(int i=1; i<=m; i++){
        int input;
        cin>>input;
        if(s.find(input)!=s.end()){
            s.erase(input);
        }
        else{
            s.insert(input);
        }
    }
    cout<<s.size();
    return 0;
}