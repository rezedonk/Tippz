#include <iostream>

using namespace std;

void swapnum(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Do: a = " << a << ", b = " << b << endl;
    swapnum(a, b);
    cout << "Posle: a = " << a << ", b = " << b << endl;
    return 0;
}
