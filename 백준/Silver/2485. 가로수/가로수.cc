#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v,dis;
    int count=0,gc;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<n-1; i++){
        dis.push_back(v[i+1]-v[i]);
    }

    gc=dis[0];
    for(int i=1; i<n-1; i++){
        gc=gcd(gc,dis[i]);
    }

    for(int i=0; i<n-1; i++){
        count+=(dis[i]/gc)-1;
    }
    cout<<count;
    return 0;
}