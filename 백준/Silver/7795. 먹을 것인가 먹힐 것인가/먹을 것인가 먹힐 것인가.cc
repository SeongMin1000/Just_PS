#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int lang;
    int eng;
    int math;
};

bool cmp(student a, student b){
    if(a.lang==b.lang && a.eng==b.eng && a.math==b.math)
        return a.name<b.name;
    else if(a.lang==b.lang && a.eng==b.eng)
        return a.math>b.math;
    else if(a.lang==b.lang)
        return a.eng<b.eng;
    else
        return a.lang>b.lang;
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n,m;
        cin>>n>>m;
        int a[20001],b[20001];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+m);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i]>b[j]) ans++;
                else break;
            }
        }
        cout<<ans<<"\n";
    }
}