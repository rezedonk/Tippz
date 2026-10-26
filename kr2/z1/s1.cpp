#include <iostream>
using namespace std;

long long fastPow(long long a, long long n) {
    long long result = 1;

    while (n > 0) {
        if (n % 2 == 1) {           // степень нечётная
            result = result * a;    
        }
        a = a * a;                  
        n = n / 2;                  // степень вдвое меньше
    }

    return result;
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << fastPow(a, n) << endl;
    return 0;
}
