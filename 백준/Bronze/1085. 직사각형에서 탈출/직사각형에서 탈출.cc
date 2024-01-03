#include <iostream>

using namespace std;

int main(){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    
    int dix=w-x, diy=h-y;
    int min_dis= dix>diy ? diy:dix;
    int min_xy= x>y ? y:x;
    int min= min_dis>min_xy ? min_xy:min_dis;

    cout<<min;
    return 0;
}
