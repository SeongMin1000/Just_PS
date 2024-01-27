#include <iostream>
#include <cstring>
using namespace std;

int count=0;

int recursion(const char *s, int l, int r){
    count++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin>>n;
    
    while(n--){
        string pal;
        cin>>pal;
        count=0;
        cout<<isPalindrome(pal.c_str())<<" "<<count<<"\n";
    }
    return 0;
}