#include <bits/stdc++.h>
using namespace std;


int alp[26]={0,};
int alp2[26]={0,};

int main(void) {
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    string a,b;
    cin>>a>>b;

    for(auto i : a){
        alp[i-'a']++;
    }
    for(auto i : b){
        alp2[i-'a']++;
    }

    int ans=0;
    for(int i=0; i<26; i++){
        ans+=abs(alp[i]-alp2[i]);
    }
    cout<<ans;
    return 0;
}