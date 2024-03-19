#include <bits/stdc++.h>
using namespace std;

int n,c;

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    return a.first>b.first;
}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    vector<pair<int,int>> arr;
    cin>>n>>c;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;

        bool chk=false;
        for(auto &a : arr){
            if(a.second==num){
                chk=true;
                a.first++;
                break;
            }
        }
        if(!chk) arr.push_back({1,num});
    }
    stable_sort(arr.begin(),arr.end(),cmp);

    for(auto &a: arr){
        while(a.first--)
            cout<<a.second<<" ";
    }
}