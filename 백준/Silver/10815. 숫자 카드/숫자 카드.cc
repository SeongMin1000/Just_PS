#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,m;
    vector<int> st;

    cin>>n;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        st.push_back(k);
    }
    sort(st.begin(),st.end());

    cin>>m;
    for(int i=0; i<m; i++){
        int k;
        cin>>k;
        cout<<binary_search(st.begin(),st.end(),k)<<" ";
    }
    
    return 0;
}