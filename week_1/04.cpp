// https://www.acmicpc.net/problem/14579

#include <iostream>;
using namespace std;

int main() {
    int first_num, second_num;

    cin>>first_num>>second_num; //3, 5
    int dummy_num=1, start_num=first_num; //1, 3

    for (int i=(second_num-first_num+1); i>0; i--) {
        int save_num=0;
        for (int j=1; j>0; j++)
        {
            save_num+=j;
            cout<<"save is "<<save_num<<"\n";

            if (j=start_num){
                cout<<"out"<<"\n";
                break;
            }
        }
        cout<<"start is "<<start_num<<"\n";
        dummy_num=dummy_num*save_num;
        cout<<"dummy is "<<dummy_num<<"\n";
        start_num+=1;

    }

    return 0;
}