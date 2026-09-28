#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b;

public:
    Triangle(double sideA, double sideB) {
        a = sideA;
        b = sideB;
    }

    double getgip() {
        return sqrt(a * a + b * b);
    }
};

int main() {
    double inputA, inputB;
    cin >> inputA >> inputB;
    Triangle myTriangle(inputA, inputB);
    
    double c = myTriangle.getgip();
    cout << c << endl;
    return 0;
}
