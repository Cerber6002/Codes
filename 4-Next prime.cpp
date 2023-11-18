#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int N) {
    N++;
    while (true) {
        if (isPrime(N)) {
            return N;
        }
        N++;
    }
}

int main() {
    int N;
    cin >> N;

    int nextPrimeNumber = nextPrime(N);
    cout<< nextPrimeNumber << endl;

    return 0;
}