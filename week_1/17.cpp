// https://www.acmicpc.net/problem/20540

#include <iostream>
using namespace std;

int main(){
    string mbti, mbti_output="ISTJ";
    cin >> mbti;


    if(mbti[0]=='I'){
        mbti_output[0]='E';
    }
    if(mbti[1]=='S'){
        mbti_output[1]='N';
    }
    if(mbti[2]=='T'){
        mbti_output[2]='F';
    }
    if(mbti[3]=='J'){
        mbti_output[3]='P';
    }
    cout<<mbti_output<<endl;
    return 0;
}