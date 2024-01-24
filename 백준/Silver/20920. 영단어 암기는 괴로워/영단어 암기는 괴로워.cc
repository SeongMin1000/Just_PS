#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> voc;
map<string,int> eng;
bool compare(string a, string b){
    if(a.size()==b.size() && eng[a]==eng[b]) return a<b;
    else if(eng[a]==eng[b]) return a.size()>b.size();
    else return eng[a]>eng[b];
}

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        if(a.size()<m) continue;
        if(eng.find(a)==eng.end()){
            eng[a]=0;
            voc.push_back(a);
        }
        eng[a]++;
    }
    sort(voc.begin(),voc.end(),compare);

    for(int i=0; i<voc.size(); i++){
        cout<<voc[i]<<"\n";
    }
    return 0;
}