#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            out << (i + j < n - 1 ? "0 " : i + j == n - 1 ? "1 " : "2 ");
        out << "\n";
    }
    in.close();
    out.close();
    return 0;
}
