#include <iostream>
#include <queue>
using namespace std;

int arr[10];

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    queue<int> q;
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=1; i<=n; i++){
        q.push(i);
    }

    cout<<"<";
    while(q.size()>1){
        for(int i=1; i<m; i++){
            q.push(q.front());
            q.pop();          
        }
        cout<<q.front()<<", ";
        q.pop(); 
    }

    cout<<q.front()<<">";
}