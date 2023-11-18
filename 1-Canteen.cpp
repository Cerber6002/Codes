#include <iostream>
using namespace std;

void calculateTotalCost(int A, int B, int N) {
    int totalTyiyn = A * 100 + B; 
    int totalCostTyiyn = totalTyiyn * N;

    int totalSom = totalCostTyiyn / 100; 
    int remainingTyiyn = totalCostTyiyn % 100;
    
    cout << totalSom << " som and " << remainingTyiyn << " tyiyn" << endl;
}

int main() {
    int A,B,N;
    cin>>A>>B>>N;
    calculateTotalCost(A,B,N);

    return 0;
}