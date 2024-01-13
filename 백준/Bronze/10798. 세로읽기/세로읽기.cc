#include <iostream>
#include <string>
using namespace std;

char arr[5][16];
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	 
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(arr[j][i]!='\0') cout<<arr[j][i];
        }
    }
}