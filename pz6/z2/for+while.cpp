#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, m, w;
    in >> n >> m >> w;

    char a[32][32];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = '0';

    while (w--) {
        int r, c;
        in >> r >> c;
        r--; c--;
        a[r][c] = '*';

        for (int i = r - 1; i <= r + 1; i++)
            for (int j = c - 1; j <= c + 1; j++)
                if (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '*')
                    a[i][j]++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            out << a[i][j];
        out << "\n";
    }

    in.close();
    out.close();
    return 0;
}
