#include <bits/stdc++.h>
using namespace std;

vector<int> book;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int s;
        cin>>s;
        book.push_back(s);
    }
    sort(book.begin(), book.end());
    
    int min=book[0];
    int page=1;
    for(int i=1; i<n; i++){
        if(min*2<=book[i]) {
            page++;
            min=book[i];
        }
    }
    cout<<page;
    return 0;
}
