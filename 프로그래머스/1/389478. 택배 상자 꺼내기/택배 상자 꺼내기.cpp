#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    
    vector<vector<int>> arr(n/w + 1, vector<int>(w));
    map<int, pair<int,int>> mm;
    int box=1;
    for(int i=0; i<n/w+1; i++){
        for(int j=0; j<w; j++){
            if(box > n) break;
            
            if(i%2==0){
                arr[i][j]=box;
                mm[box]={i,j};
            }
            else{
                arr[i][w-1-j]=box;
                mm[box]={i,w-1-j};
            }
            box++;
        }
    }
    
    auto tmp=mm[num].first;
    for(int i=n/w; i>=tmp; i--){
        if(arr[i][mm[num].second]!=0) answer++;
    }
    
    return answer;
}