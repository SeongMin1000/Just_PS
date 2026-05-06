#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> targets) {
    int answer = 0;
    
    sort(targets.begin(), targets.end(), [](auto &a, auto &b) {
        return a[1] < b[1];
    });
    
    
    double last = -1; 
    
    for (auto &t : targets) {
        int s = t[0];
        int e = t[1];
        
        if (last <= s) {
            answer++;
            last = e; 
        }
    }
    return answer;
}