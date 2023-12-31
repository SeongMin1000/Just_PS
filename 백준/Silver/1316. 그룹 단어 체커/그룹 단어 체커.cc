#include <iostream>

using namespace std;

int main(){
    string str;
    int count=0;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>str;
        int len=str.length();
        bool flag=true;

        for(int j=0; j<len; j++){
            for(int k=0; k<j; k++){
                if(str[j]!=str[j-1] && str[k]==str[j]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag) count++;
    }
    cout<<count;
    return 0;
}
