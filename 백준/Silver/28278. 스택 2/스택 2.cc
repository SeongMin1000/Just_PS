#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    stack<int> sta;
    int n,m,k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        switch (m)
        {
        case 1:
            cin>>k;
            sta.push(k);
            break;
        case 2:
            if(!sta.empty()){
                cout<<sta.top()<<"\n";
                sta.pop();
            }
            else cout<<"-1\n";
            break;
        case 3:
            cout<<sta.size()<<"\n";
            break;
        
        case 4:
            if(sta.empty()) cout<<1<<"\n";
            else cout<<"0\n";
            break;
        case 5:
            if(!sta.empty()){
                cout<<sta.top()<<"\n";
            }
            else cout<<"-1\n";
            break;
        }
    }
    return 0;
}