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
    int n;
    cin>>n;
    vector<student> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].name>>v[i].lang>>v[i].eng>>v[i].math;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<n; i++){
        cout<<v[i].name<<"\n";
    }
}