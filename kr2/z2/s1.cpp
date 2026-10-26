#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;                  // база: НОД(a, 0) = a
    }
    return gcd(b, a % b);          // шаг Евклида
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
