// https://www.acmicpc.net/problem/1267

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N=0;
    vector<int> phone;

    cin >> N;

    for(int i=0; i<N; i++){
        int input=0;
        cin >> input;
        phone.push_back(input);
    }

    vector<int> young;
    vector<int> min;
    int young_total=0, min_total=0;

    //영식이 방법
    for(int i=0; i<N; i++){
        young.push_back((phone[i]/30)*10 + 10);
    }
    for(int i=0; i<N; i++){
        young_total += young[i];
    }

    //만식이 방법
    for(int i=0; i<N; i++){
        min.push_back((phone[i]/60)*15 + 15);
    }
    for(int i=0; i<N; i++){
        min_total += min[i];
    }

    if(young_total<min_total){
        cout << "Y " << young_total << endl;
    }
    else if(young_total==min_total){
        cout << "Y " << "M " << young_total << endl;
    }
    else{
        cout << "M " << min_total << endl;
    }

    return 0;
}