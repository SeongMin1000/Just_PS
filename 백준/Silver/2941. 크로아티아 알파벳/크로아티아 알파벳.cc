#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    
    int count=0;
    int len=str.length();
    for(int i=0; i<len; i++){
        count++;

        if(str[i]=='='){
            if(str[i-1]=='c') count--;
            if(str[i-1]=='s') count --;
            if(str[i-1]=='z'){
                count--;
                if(str[i-2]=='d') count--;
            }
        }

        if(str[i]=='-'){
            if(str[i-1]=='c') count--;
            if(str[i-1]=='d') count--;
        }

        if(str[i]=='j'){
            if(str[i-1]=='l') count--;
            if(str[i-1]=='n') count--;
        }
    }
    cout<<count;
    return 0;
}
