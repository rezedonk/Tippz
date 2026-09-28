#include <iostream>
#include "swap_utils.h"

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Do: a = " << a << ", b = " << b << endl;
    swapnum(a, b);
    cout << "Posle: a = " << a << ", b = " << b << endl;
    return 0;
}
