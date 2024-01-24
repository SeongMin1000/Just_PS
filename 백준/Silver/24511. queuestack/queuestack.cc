#include <iostream>
#include <deque>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    deque<int> d;
    bool arr[100000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(arr[i]==0) d.push_back(x);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int y;
        cin>>y;
        d.push_front(y);
        cout<<d.back()<<" ";
        d.pop_back();
    }
    return 0;
}