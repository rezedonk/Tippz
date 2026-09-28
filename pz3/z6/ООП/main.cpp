#include <iostream>

using namespace std;

class NumPair {
private:
    int a, b;

public:
    NumPair(int first, int second) {
        a = first;
        b = second;
    }

    void doSwap() {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    void print() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x, y;
    cin >> x >> y;
    
    NumPair pair(x, y);
    cout << "Do: ";
    pair.print();
    pair.doSwap();
    cout << "Posle: ";
    pair.print();
    return 0;
}
