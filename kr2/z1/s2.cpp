#include <iostream>
using namespace std;

long long fastPow(long long a, long long n) {
    if (n == 0) {
        return 1;                          // база: a^0 = 1
    }
    if (n % 2 == 0) {
        long long half = fastPow(a, n / 2);
        return half * half;                // a^n = (a^(n/2))^2
    }
    return a * fastPow(a, n - 1);          // a^n = a * a^(n-1)
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << fastPow(a, n) << endl;
    return 0;
}
