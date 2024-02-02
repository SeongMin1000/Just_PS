#include <iostream>
#include <deque>
using namespace std;

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    deque<int> d;
    int n,m;
    cin>>n>>m;
    
    for(int i=1; i<=n; i++){
        d.push_back(i);
    }

    int count=0;
    int left,right;
    while(m--){
        int num;
        cin>>num;

        for(int i=0; i<d.size(); i++){
            if(d[i]==num){
                left=i;
                right=d.size()-i;
                break;
            }
        }

        if(left<=right){
            while(1){
                if(num==d.front()) break;
                d.push_back(d.front());
                d.pop_front();
                count++;
            }
            d.pop_front();
        }
        else{
            count++;
            while(1){
                if(num==d.back()) break;
                d.push_front(d.back());
                d.pop_back();
                count++;
            }
            d.pop_back();
        }
    }

    cout<<count;
    return 0;
}