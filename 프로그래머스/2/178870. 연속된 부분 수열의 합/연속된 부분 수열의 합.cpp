#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    int l=0;
    int sum=0;
    int min_len=1000002;
    for(int r=0; r<sequence.size(); r++){
        sum+=sequence[r];
        
        while(sum>k){
            sum-=sequence[l];
            l++;
        }
        
        if(sum==k){
            int len=r-l;
            
            if(len<min_len){
                min_len=len;
                answer={l,r};
            }
        }
     
    }
    return answer;
}