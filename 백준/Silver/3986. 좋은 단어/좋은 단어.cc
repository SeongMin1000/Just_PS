#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n,count=0;
    cin>>n;
    while(n--){
        stack<char> d;
        string s;
        cin>>s;
        
        for(int i=0; i<s.size(); i++){
            if(d.empty()) d.push(s[i]);
            else if(d.top()==s[i]) d.pop();
            else d.push(s[i]);
        }

        if(d.empty()) count++;
    }

    cout<<count;
    return 0;
}