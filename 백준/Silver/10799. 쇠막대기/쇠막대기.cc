#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string str;
    stack<char> pipe;
    int ans=0;

    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='(') pipe.push(str[i]);
        else{
            pipe.pop();
            if(str[i-1]=='(') ans+=pipe.size();
            else ans++; 
        }
    }

    cout<<ans;
    return 0;
}