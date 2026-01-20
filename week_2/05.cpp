// https://www.acmicpc.net/problem/10808

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string input;
    cin >> input;

    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<char> input_v;
    vector<int> output_v(26, 0);

    for(int i=0; i<input.length(); i++){
        input_v.push_back(input[i]);
    }
    
    for(int i=0; i<input.length();i++){
        for(int j=0; j<alphabet.size(); j++){
            if(input_v[i]==alphabet[j]){
                output_v[j] += 1;
            }
        }
    }

    for(int i=0; i<output_v.size(); i++){
        cout << output_v[i] << " ";
    }

    return 0;
}