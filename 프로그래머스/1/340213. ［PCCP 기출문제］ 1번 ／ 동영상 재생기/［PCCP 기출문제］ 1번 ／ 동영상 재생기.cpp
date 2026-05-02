#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int convert(string s){
    int minute=stoi(s.substr(0,2));
    int sec=stoi(s.substr(3,2));
    return minute*60+sec;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int video_len_int=convert(video_len);
    int pos_int=convert(pos);
    int op_start_int=convert(op_start);
    int op_end_int=convert(op_end);
    
    if(op_start_int<=pos_int && pos_int<=op_end_int){
        pos_int=op_end_int;
    }
    
    for(auto command: commands){
        if(command=="next"){
            pos_int+=10;
            if(pos_int>=video_len_int) pos_int=video_len_int;
        }
        else{
            pos_int-=10;
            if(pos_int<=0) pos_int=0;
        }
        
        if(op_start_int <= pos_int && pos_int <= op_end_int){
        pos_int = op_end_int;
        }
    }
    
    int minute = pos_int / 60;
    int sec = pos_int % 60;

    string min_s = (minute < 10 ? "0" : "") + to_string(minute);
    string sec_s = (sec < 10 ? "0" : "") + to_string(sec);

    return min_s + ":" + sec_s;
    
   
}