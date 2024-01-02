#include <iostream>

using namespace std;

char arr[100][100]={0,};

int main(){
    int n;
    cin>>n;

    int count=0;
    int x,y;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                if(!arr[y+j][x+k]){
                    arr[y+j][x+k]=1;
                    count++;
                }
                
            }
        }
    }

    cout<<count;
    return 0;
}
