// https://www.acmicpc.net/problem/2908

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int first_num=0, second_num=0;
    vector<int> number1;
    vector<int> number2;

    cin >> first_num >> second_num;


//첫번째
    while(first_num>0){
        int dummy=0;
        dummy = first_num%10;
        number1.push_back(dummy);
        first_num /= 10;
    }
    int new_first=0;
    new_first += number1[0]*100;
    new_first += number1[1]*10;
    new_first += number1[2];

//두번째
    while(second_num>0){
        int dummy=0;
        dummy = second_num%10;
        number2.push_back(dummy);
        second_num /= 10;
    }
    int new_second=0;
    new_second += number2[0]*100;
    new_second += number2[1]*10;
    new_second += number2[2];

    //cout << "첫 숫자 : " << new_first << endl; 
    //cout << " 둘째 숫자 : " << new_second << endl;

    if(new_first>new_second){
        cout << new_first << endl;
    }
    else{
        cout << new_second << endl;
    }

    return 0;
}