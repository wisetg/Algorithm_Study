// https://www.acmicpc.net/problem/14681

#include <iostream>;
using namespace std;

int main() {
    int first_input=0;
    int second_input=0;

    cin>>first_input;
    cin>>second_input;

    if (first_input>0 && second_input>0)
    {
        cout<<1<<endl;
    }
    else if (first_input<0 && second_input>0){
        cout<<2<<endl;
    }
    else if (first_input<0 && second_input<0){
        cout<<3<<endl;
    }
    else if (first_input>0 && second_input<0) {
        cout<<4<<endl;
    }
    
    return 0;
}