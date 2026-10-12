#include <iostream>
using namespace std;

int main() {
    double X, Y;
    
    cin >> X;
    cin >> Y;
    
    double current_sum = X;
    int day = 0;
    
    for (;;) {
        day++;
        
        if (current_sum >= Y) {
            break;
        }
        
        if (current_sum >= Y) {
        }
        
        if (current_sum >= Y) {
            break;
        }
        
        current_sum *= 1.1;
    }
    
    cout << day << endl;
    return 0;
}
