#include <bits/stdc++.h>
using namespace std;

int n;
string arr[51];

bool cmp(const string &a, const string &b){
    int asum=0,bsum=0;
    if(a.size()==b.size()){
        for(int i=0; i<a.size(); i++){
            if(a[i]>='0' && a[i]<='9'){
                asum+=a[i]-'0';
            }
            if(b[i]>='0' && b[i]<='9'){
                bsum+=b[i]-'0';
            }
        }
        if(asum==bsum) return a<b;
        else return asum<bsum;
    }
    else return a.size()<b.size();
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,cmp);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}