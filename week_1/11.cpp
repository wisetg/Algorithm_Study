// https://www.acmicpc.net/problem/3053

#include <iostream>;
#include <iomanip>;
using namespace std;

int main() {
    double input_num;
    cin>>input_num;

    double pi = 3.14159265359;
    cout<<fixed<<setprecision(6);
    cout<<input_num*input_num*pi<<endl;
    cout<<input_num*input_num*2<<endl;

    return 0;
}