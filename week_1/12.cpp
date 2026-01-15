// https://www.acmicpc.net/problem/1330

#include <iostream>;
using namespace std;

int main() {
    int first_num, second_num;
    cin>>first_num>>second_num;

    if(first_num>second_num){
        cout<<">";
    }
    else if(first_num==second_num){
        cout<<"==";
    }
    else{
        cout<<"<";
    }

    return 0;
}