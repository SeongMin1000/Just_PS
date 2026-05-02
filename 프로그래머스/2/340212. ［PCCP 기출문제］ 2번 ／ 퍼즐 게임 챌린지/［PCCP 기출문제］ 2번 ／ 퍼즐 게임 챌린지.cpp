#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool can(int mid){
    
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 0;
    
    int r=*max_element(diffs.begin(), diffs.end());
    int l=1;
    
    while(l<=r){
        int mid=(l+r)/2;
            
        long long total=0;
        for(int i=0; i<diffs.size(); i++){
            if(diffs[i]<=mid) total+=times[i];
            else{
                int fail=diffs[i]-mid;
                int prev = (i == 0 ? 1 : times[i - 1]);
                
                total+=(long long)fail * (times[i]+prev) + times[i];
            }
            
            if(total>limit) break;
        }
        
        if(total<=limit) {
            answer=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return answer;
}