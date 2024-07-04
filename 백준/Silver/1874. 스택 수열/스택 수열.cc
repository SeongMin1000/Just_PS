#include <bits/stdc++.h>
using namespace std;

stack<int> s;
string ans;

int main(void) {
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int k;
    cin>>k;
    int m=1;
    for(int i=0; i<k; i++){
        int n;
        cin>>n;

        while(m<=n){
            s.push(m++);
            ans+='+';
        }
        if(n==s.top()){
            s.pop();
            ans+='-';
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    for(auto i : ans) cout<<i<<"\n";
    return 0;
}