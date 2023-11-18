#include <iostream>
using namespace std;

bool isLuckyTicket(int ticketNumber) {
    
    int digit1 = ticketNumber / 100000;   
    int digit2 = (ticketNumber / 10000) % 10;  
    int digit3 = (ticketNumber / 1000) % 10;   
    int digit4 = (ticketNumber / 100) % 10;    
    int digit5 = (ticketNumber / 10) % 10;     
    int digit6 = ticketNumber % 10;            
    
  
    return (digit1 + digit2 + digit3 == digit4 + digit5 + digit6);
}

int main() {
    int ticketNumber;
    
    cin >> ticketNumber;

   
    if (isLuckyTicket(ticketNumber)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}