#include <iostream>
#include <string>

using namespace std;

int dis[100002];

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int ans=0;
    bool minus=false;
    string num="";
    string input;
    cin>>input;
    
    for(int i=0; i<=input.size(); i++){
        if(input[i]=='-' || input[i]=='+' || i==input.size()){
            if(minus==true){
                ans-=stoi(num);
                num="";
            }
            else if(minus==false){
                ans+=stoi(num);
                num="";
            }
        }
        else{
            num+=input[i];
        }

        if(input[i]=='-') minus=true;
    }
    cout<<ans;
    return 0;
}