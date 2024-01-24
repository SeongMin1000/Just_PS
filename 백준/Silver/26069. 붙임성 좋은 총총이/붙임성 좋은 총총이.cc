#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    map<string,bool> m;
    int n;
    cin>>n;
    while(n--){
        string str1,str2;
        cin>>str1>>str2;

        if(str1=="ChongChong"){
            m.insert({str1,true});
        }
        else if(str2=="ChongChong"){
            m.insert({str2,true});
        }
        if(m[str1]) m[str2]=true;
        if(m[str2]) m[str1]=true;
    }

    int count=0;
    for(auto i:m){
        if(i.second) count++;
    }
    cout<<count;
    return 0;
}