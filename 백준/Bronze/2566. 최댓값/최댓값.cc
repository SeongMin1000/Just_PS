#include <iostream>
#include <string>
using namespace std;

char arr[5][16];
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int arr[9][9];
    int max=0, tmp1=0, tmp2=0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>arr[i][j];
            if(arr[i][j]>max){
                max=arr[i][j];
                tmp1=i;
                tmp2=j;
            }
        }
    }

    cout<<max<<"\n";
    cout<<tmp1+1<<" "<<tmp2+1;
    return 0;
}