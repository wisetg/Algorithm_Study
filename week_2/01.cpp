// https://www.acmicpc.net/problem/10824

#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_input, second_input, third_input, fourth_input;
    cin >> first_input >> second_input >> third_input >> fourth_input;

    first_input = first_input + second_input;
    third_input = third_input + fourth_input;
    
    long long int first_num = stoll(first_input), third_num = stoll(third_input);

    cout << first_num+third_num << endl;

    return 0;
}