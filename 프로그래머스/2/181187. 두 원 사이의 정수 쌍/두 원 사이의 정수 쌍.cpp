#include <bits/stdc++.h>

using namespace std;

long long solution(int r1, int r2) {
    long long answer = 0;
    
    for(int x=1; x<=r2; x++){
        long long y_max=floor(sqrt((long long)r2 * r2 - (long long)x * x));
        
        long long y_min = 0;
        if(x<r1)
            y_min=ceil(sqrt((long long)r1 * r1 - (long long)x * x));
        
        answer+=y_max-y_min+1;
    }
    return answer*4;
}