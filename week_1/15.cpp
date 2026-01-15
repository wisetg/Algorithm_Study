// https://www.acmicpc.net/problem/15917

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int quarry=0,input_num=0;
    cin >> quarry;
    vector <int> v(quarry-1,0);

    for (int i=0;i<quarry;i++){
        cin >> input_num;
        v[i]=input_num;
    }
    
    for (int i=0;i<quarry;i++){
        if ((v[i]&(v[i]-1))==0){
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    return 0;
}