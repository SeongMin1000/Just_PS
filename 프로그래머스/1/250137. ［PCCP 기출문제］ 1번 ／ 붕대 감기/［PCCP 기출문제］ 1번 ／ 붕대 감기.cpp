#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    
    int last=attacks[attacks.size()-1][0];
    int cast=0;
    int max_health=health;
    int idx=0;
    
    for(int i=0; i<=last; i++){
        
            if(idx < attacks.size() && i == attacks[idx][0]){
                cast=0;
                health-= attacks[idx][1];
                idx++;
                if(health<=0) return -1;
            }
            else{
                cast++;
                health = min(max_health, health + bandage[1]);
                if(cast==bandage[0]){
                    cast=0;
                    health=min(max_health, health+bandage[2]);
                }
            }
        
    }
    
    return answer=health;
}