#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;

    while(t--){
        deque<int> dq;
        bool dir=true;
        bool isEroor=false;
        string temp="";
        
        string p;
        cin>>p;

        int n;
        cin>>n;

        string x;
        cin>>x;

        for(auto a: x){
            if(a=='[') continue;
            else if(a==']' || a==','){
                if(temp!=""){
                    dq.push_back(stoi(temp));
                    temp="";
                }
                
            }
            else{
                temp+=a;
            }
        }

        for(auto a:p){
            if(a=='R'){
                dir=!dir;
            }
            else{
                if(dq.empty()){
                    isEroor=true;
                    break;
                }
                else{
                    if(dir) dq.pop_front();
                    else dq.pop_back();
                }
            }
        }

        if(isEroor) cout<<"error\n";
        else{
            if(!dir) reverse(dq.begin(), dq.end());
            cout<<"[";
            for(int i=0; i<dq.size(); i++){
                if(i==dq.size()-1) cout<<dq[i];
                else cout<<dq[i]<<",";
            }
            cout<<"]\n";
        }
    }
    
    return 0;
}