// https://www.acmicpc.net/problem/2576

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> number;

    for(int i=0; i<7; i++){
        int input =0;
        cin >> input;
        number.push_back(input);
    }

    for(int i=0; i<number.size();){
        if(number[i]%2==0){
            number.erase(number.begin()+i);
        }
        else{
            i++;
        }
    }

    if(number.empty()){
        cout << -1 << endl;
        return 0;
    }

    int dummy = 0;
    for(int i=0; i<number.size(); i++){
        dummy += number[i];
    }

    if(dummy>0){
        cout << dummy << endl;

        dummy = 100;
        for(int i=0; i<number.size(); i++){
            if(dummy>number[i]){
                dummy = number[i];
            }
        }
        cout << dummy << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}