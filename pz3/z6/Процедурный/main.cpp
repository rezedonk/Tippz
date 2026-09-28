#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Do obmena: a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Posle obmena: a = " << a << ", b = " << b << endl;
    return 0;
}
