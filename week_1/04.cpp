// https://www.acmicpc.net/problem/14579

#include <iostream>
using namespace std;

int main() {
    long long int first_num, second_num;
    cin >> first_num >> second_num;

    const long long int num = 14579;

    long long int dummy_num = 1;
    long long int start_num = first_num;

    for (long long int i = (second_num - first_num + 1); i > 0; i--) {
        long long int save_num = 0;

        for (long long int j = 1; j <= start_num; j++) {
            save_num += j;
        }

        dummy_num = (dummy_num * (save_num % num)) % num;
        start_num++;
    }

    cout << dummy_num << "\n";
    return 0;
}