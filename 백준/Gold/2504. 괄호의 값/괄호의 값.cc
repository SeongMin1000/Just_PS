#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    string s;
    cin>>s;
    int tmp=1,ans=0;
    stack<char> t;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            t.push(s[i]);
            tmp*=2;
        }
        else if(s[i]=='['){
            t.push(s[i]);
            tmp*=3;
        }
        else if(s[i]==')'){
            if(t.empty() || t.top()!='('){
                ans=0;
                break;
            }
            if(s[i-1]=='('){
                ans+=tmp;
                tmp/=2;
                t.pop();
            }
            else{
                tmp/=2;
                t.pop();
            }
        }
        else if(s[i]==']'){
            if(t.empty() || t.top()!='['){
                ans=0;
                break;
            }
            if(s[i-1]=='['){
                ans+=tmp;
                tmp/=3;
                t.pop();
            }
            else{
                tmp/=3;
                t.pop();
            }
        }
    }
    if(!t.empty()) ans=0;
    cout<<ans;
    return 0;
}