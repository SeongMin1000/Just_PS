#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    vector<long long> v;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
        reverse(s[i].begin(), s[i].end());
        v.push_back(stoll(s[i]));
    }
    
    sort(v.begin(),v.end());

    for(int i=0; i<n; i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}