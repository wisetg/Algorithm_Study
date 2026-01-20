// https://www.acmicpc.net/problem/2869

#include <iostream>
using namespace std;

int main() {
    long long A, B, V;
    cin >> A >> B >> V;

    long long gap = A - B;

    if (V <= A) {
        cout << 1 << "\n";
        return 0;
    }

    long long remain = V - A;
    long long days = (remain + gap - 1) / gap;
    cout << days + 1 << "\n";
    return 0;
}
