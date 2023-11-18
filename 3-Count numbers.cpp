#include <iostream>
using namespace std;

int main() {
    int N, num;
    int evens = 0, odds = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    cout << "Odds : " << odds << endl;
    cout << "Evens: " << evens << endl;

    return 0;
}