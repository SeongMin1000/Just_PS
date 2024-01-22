#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
    
    queue<int> q;
    int n;
    cin>>n;

    while(n--){
        string input;
        cin>>input;
        if(input=="push"){
            int a;
            cin>>a;
            q.push(a);
        }
        else if(input=="pop"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(input=="size"){
            cout<<q.size()<<"\n";
        }
        else if(input=="empty"){
            cout<<q.empty()<<"\n";
        }
        else if(input=="front"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
            }
        }
        else if(input=="back"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.back()<<"\n";
            }
        }
    }
    return 0;
}