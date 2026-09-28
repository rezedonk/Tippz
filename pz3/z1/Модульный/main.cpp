#include <iostream>
#include <cmath>
using namespace std;

double gip(double x, double y) {
    return sqrt(x * x + y * y);
}

int main() {
    double a, b;;
    cin >> a >> b;
    double res = gip(a, b);
    cout << res << endl;
    return 0;
}
