#include <iostream>
using namespace std;

int main() {
    double X, Y;
    
    cin >> X;
    cin >> Y;
    
    double current_sum = X;
    int day = 1;
    
    for (;;) {
        if (current_sum >= Y) {
            break;
        }
        
        day++;
        current_sum *= 1.1;
    }
    
    cout << day << endl;
    return 0;
}
