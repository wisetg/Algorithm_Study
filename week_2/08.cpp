// https://www.acmicpc.net/problem/11365

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string code;
    vector<string> storage;

    while (true) {
        getline(cin, code);

        if (code == "END"){
            break;
        }
        storage.push_back(code);
    }

    for(int i=0; i<storage.size(); i++){
        cout << storage[i] << "\n";
    }
    
    vector<string> output;
    for(int i=0; i<storage.size(); i++){
        for
    }

    return 0;
}