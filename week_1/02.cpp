// https://www.acmicpc.net/problem/8393

#include <iostream>;
using namespace std;

int main() {
    int input_num, sum_num=0;

    cin>>input_num;

    while(input_num>0){
        sum_num += input_num;
        input_num--;
    }
    cout<<sum_num<<endl;
}