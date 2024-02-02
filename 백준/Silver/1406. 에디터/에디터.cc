#include <iostream>
#include <list>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    list<char> l;
    string s;
    int n;
    cin>>s>>n;

    for(int i=0; i<s.size(); i++){
        l.push_back(s[i]);
    }
    list<char>::iterator cur=l.end();
    
    while(n--){
        char c;
        cin>>c;
        if(c=='L'){
            if(cur!=l.begin()) cur--;
        }
        else if(c=='D'){
            if(cur!=l.end()) cur++;
        }
        else if(c=='B'){
            if(cur!=l.begin()) cur=l.erase(--cur);
        }
        else if(c=='P'){
            char a;
            cin>>a;
            l.insert(cur,a);
        }
    }

    for(auto c:l){
        cout<<c;
    }
}