#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    vector<int> dice;
    for(int i=0; i<3; i++){
        int n;
        cin>>n;
        dice.push_back(n);
    }

    int max=*max_element(dice.begin(),dice.end());
    if(dice[0]==dice[1] && dice[1]==dice[2]){
        cout<<10000+(dice[0]*1000);
    }
    else if(dice[0]!=dice[1] && dice[1]!=dice[2] && dice[0]!=dice[2]){
        cout<<max*100;
    }
    else if(dice[0]==dice[1] || dice[0]==dice[2]){
        cout<<1000+(dice[0]*100);
    }
    else{
        cout<<1000+(dice[1]*100);
    }
    
    return 0;
}