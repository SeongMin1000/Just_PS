#include <iostream>
#include <deque>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    deque<int> d;
    int n,x;
    cin>>n;

    while(n--){
        int input;
        cin>>input;
        switch (input)
        {
        case 1:
            cin>>x;
            d.push_front(x);
            break;
        case 2:
            cin>>x;
            d.push_back(x);
            break;
        case 3:
            if(!d.empty()){
                cout<<d.front()<<"\n";
                d.pop_front();
            }
            else cout<<"-1\n";
            break;
        case 4:
            if(!d.empty()){
                cout<<d.back()<<"\n";
                d.pop_back();
            }
            else cout<<"-1\n";
            break;
        case 5:
            cout<<d.size()<<"\n";
            break;
        case 6:
            if(!d.empty()) cout<<"0\n";
            else cout<<"1\n";
            break;
        case 7:
            if(!d.empty()){
                cout<<d.front()<<"\n";
            }
            else cout<<"-1\n";
            break;
        case 8:
            if(!d.empty()){
                cout<<d.back()<<"\n";
            }
            else cout<<"-1\n";
            break;
        }      
    }
    return 0;
}