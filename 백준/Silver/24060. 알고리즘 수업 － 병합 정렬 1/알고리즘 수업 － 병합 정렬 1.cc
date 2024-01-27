#include <iostream>
using namespace std;

int n,k,count=0;
int a[500001],tmp[500001];
bool flag=false;

void merge(int a[], int p, int q, int r) {
    int i=p, j=q + 1, t=0;
    while (i <= q && j <= r) {
        if (a[i] <= a[j]) tmp[t++]=a[i++];
        else tmp[t++]=a[j++]; 
    }
    while (i <= q){ 
        tmp[t++]=a[i++];
    }
    while (j <= r){
        tmp[t++]=a[j++];
    }
    i=p; 
    t=0;
    while (i <= r) {
        a[i++]=tmp[t++];
        count++;
        if(count==k){
            cout<<a[i-1];
            flag=true;
            return;
        }
    }
}

void merge_sort(int a[], int p, int r) { 
    if (p < r){
        int q =(p + r) / 2;      
        merge_sort(a, p, q);    
        merge_sort(a, q + 1, r);  
        merge(a, p, q, r);       
    }
}

int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }  
    merge_sort(a,0,n-1);
    if(!flag) cout<<-1;
    return 0;
}