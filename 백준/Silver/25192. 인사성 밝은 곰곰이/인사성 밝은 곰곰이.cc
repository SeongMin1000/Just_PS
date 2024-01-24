#include <iostream>
#include <set>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    set<string> chat;
    int n,count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        string user;
        cin>>user;
        if(user=="ENTER"){
            count+=chat.size();
            chat.clear();
        }
        else chat.insert(user);
    }
    count+=chat.size();
    cout<<count;
    return 0;
}