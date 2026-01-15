// https://www.acmicpc.net/problem/2752

#include <iostream>;
using namespace std;

int main() {
    int first_num, second_num, third_num;
    cin>>first_num>>second_num>>third_num;


    if(first_num>second_num){
        if(third_num>first_num){
            cout<<second_num<<" "<<first_num<<" "<<third_num;
        }
        else if(first_num>third_num && third_num>second_num){
            cout<<second_num<<" "<<third_num<<" "<<first_num;
        }
        else{
            cout<<third_num<<" "<<second_num<<" "<<first_num;
        }
    }
    else{ //second>first
        if(third_num>second_num){
            cout<<first_num<<" "<<second_num<<" "<<third_num;
        }
        else if(second_num>third_num && third_num>first_num){
            cout<<first_num<<" "<<third_num<<" "<<second_num;
        }
        else{
            cout<<third_num<<" "<<first_num<<" "<<second_num;
        }
    }
    return 0;
}