// https://www.acmicpc.net/problem/9498

#include <iostream>
using namespace std;

int main(){
    long long int first_input=0, second_input=0;
    cin >> first_input >> second_input;

    if(first_input-second_input<0){
        cout<<-(first_input-second_input)<<endl;
    }
    else{
        cout<<first_input-second_input<<endl;
    }

    return 0;
}