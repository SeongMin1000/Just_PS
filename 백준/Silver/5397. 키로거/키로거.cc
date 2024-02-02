#include <iostream>
#include <list>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin>>n;
    
    while(n--){
        string s;
        cin>>s;
        list<char> l;
        auto cur=l.begin();

        for(int i=0; i<s.size(); i++){
            if(s[i]=='<'){
                if(cur!=l.begin()) cur--;
            }
            else if(s[i]=='>'){
                if(cur!=l.end()) cur++;
            }
            else if(s[i]=='-'){
                if(cur!=l.begin()) cur=l.erase(--cur);
            }
            else l.insert(cur,s[i]);
        }
        for(auto e:l) cout<<e;
        cout<<"\n";
    }
    return 0;
}