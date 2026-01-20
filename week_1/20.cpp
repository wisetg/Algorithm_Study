// https://www.acmicpc.net/problem/2839

#include <iostream>
using namespace std;

int main(){
    int total=0, bag_num=0;
    cin >> total;

    int fivekg_bag = total/5;

    for(;fivekg_bag>=0; fivekg_bag--){
        int other = total-fivekg_bag*5;
        if(other==0){
            bag_num += fivekg_bag;
            cout<<bag_num<<"\n";
            break;
        }
        else if(other>0 && other%3==0){
            bag_num += fivekg_bag + (other/3);
            cout<<bag_num<<"\n";
            break;
        }
        else if(other>0 && other%3>=0 && fivekg_bag==0){
            cout<<-1<<"\n";
        }

    }

    

    return 0;
}