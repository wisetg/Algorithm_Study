// https://www.acmicpc.net/problem/10871

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N=0, X=0;
    vector<int> A;

    cin >> N >> X;

    for(int i=0; i<N; i++){
        int input=0;
        cin >> input;
        A.push_back(input);
    }

    for(int i=0; i<N; i++){
        if(A[i]<X){
            cout << A[i] << " ";
        }
    }

    return 0;
}