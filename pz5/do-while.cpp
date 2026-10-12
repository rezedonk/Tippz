#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    
    double current_sum = X;
    int day = 1;
    
    if (current_sum < Y) {
        do {
            day++;
            current_sum *= 1.1;
        } while (current_sum < Y);
    }
    
    cout << day << endl;
    return 0;
}
