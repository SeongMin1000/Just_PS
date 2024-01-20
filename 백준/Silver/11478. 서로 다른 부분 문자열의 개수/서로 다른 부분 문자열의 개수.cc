#include <iostream>
#include <set>
using namespace std;


int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin>>s;
    set<string> sett;

    string str="";
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            str+=s[j];
            sett.insert(str);
        }
        str="";
    }
    cout<<sett.size();
    return 0;
}