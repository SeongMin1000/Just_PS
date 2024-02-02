#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[10];

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    string n;
    cin>>n;
    for(int i=0; i<n.size(); i++){
        arr[n[i]-'0']++;
    }

    int num=0;
    for(int i=0; i<10; i++){
        if(i!=9 && i!=6) num=max(num,arr[i]);
    }
    cout<<max(num,(arr[6]+arr[9]+1)/2);
    return 0;
}