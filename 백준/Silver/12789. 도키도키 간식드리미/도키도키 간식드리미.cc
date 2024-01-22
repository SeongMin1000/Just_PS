#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    queue<int>student;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        student.push(num);
    }
    stack<int>waiting;
    vector<int>vec; // 순번의 결과를 넣는 벡터 


    int num=1;
    while(!student.empty()){
        if(student.front()==num){
            vec.push_back(student.front());
            student.pop();
            num++;
        }else if(!waiting.empty()&&waiting.top()==num){
            vec.push_back(waiting.top());
            waiting.pop();
            num++;
        }else{
            waiting.push(student.front());
            student.pop();
        }
    }

    while(!waiting.empty()){
        vec.push_back(waiting.top());
        waiting.pop();
    }

    bool check=true;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]>vec[i+1]){
            check=false;
        }
    }
    if(check){
        cout<<"Nice"<<"\n";
    }else{
        cout<<"Sad"<<"\n";
    }



}