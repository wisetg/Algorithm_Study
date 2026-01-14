// https://www.acmicpc.net/problem/2739

#include <iostream>;
using namespace std;

int main() {
    
    int input_num;

    cin>>input_num;

    for (int i=1; i<10; i++){
        cout<<input_num<<" * "<<i<<" = "<<input_num*i<<"\n";
    }
    
    return 0;
}