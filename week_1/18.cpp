//https://www.acmicpc.net/problem/9498

#include <iostream>
using namespace std;

int main(){
    int test_score=0;
    cin >> test_score;

    if(test_score>=90){
        cout<<"A"<<endl;
    }
    else if(test_score>=80){
        cout<<"B"<<endl;
    }
    else if(test_score>=70){
        cout<<"C"<<endl;
    }
    else if(test_score>=60){
        cout<<"D"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
    
    return 0;
}