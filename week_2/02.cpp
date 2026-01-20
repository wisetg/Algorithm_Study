// https://www.acmicpc.net/problem/2438

#include <iostream>
#include <string>
using namespace std;

int main(){
    string star = "*";
    int input = 0;
    cin >> input;

    for(int i=0; i<input; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}