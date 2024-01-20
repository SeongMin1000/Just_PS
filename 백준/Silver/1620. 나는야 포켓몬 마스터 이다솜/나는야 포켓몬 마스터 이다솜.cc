#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,int> poc;
string pocs[100001];

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;

    for(int i=1; i<=n; i++){
        string a;
        cin>>a;
        pocs[i]=a;
        poc.insert({a,i});       
    }
    for(int i=1; i<=m; i++){
        string b;
        cin>>b;
        if(isdigit(b[0])){
            cout<<pocs[stoi(b)]<<"\n";
        }
        else{
            cout<<poc[b]<<"\n";
        }
    }
    return 0;
}