#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << (i + j < n - 1 ? "0 " : i + j == n - 1 ? "1 " : "2 ");
        cout << "\n";
    }
    return 0;
}
