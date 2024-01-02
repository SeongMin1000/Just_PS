#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char arr[100][100]={0,};

int main(){
    int n;
    string b;
    cin>>b>>n;
    int ten=0;
    int len=b.length();

    for(int i=0; i<len; i++){
        if(b[i]>='0' && b[i]<='9'){
            ten+=(int)pow(n,len-1-i)*(b[i]-'0');
        }
        else if(b[i]>='A' && b[i]<='Z'){
            ten+=(int)pow(n,len-1-i)*(b[i]-'A'+10);
        }
    }
    
    cout<<ten;
    return 0;
}
