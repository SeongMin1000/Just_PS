#include <iostream>
using namespace std;

int main(){
    int x,y,c;
    cin>>x>>y>>c;

    int a=(y+c)%60;
    x+=(y+c)/60;

    cout<<x%24<<" "<<a;
    return 0;
}