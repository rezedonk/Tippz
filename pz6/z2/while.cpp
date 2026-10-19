#include <iostream>
using namespace std;

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    char a[32][32];
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < m) {
            a[i][j] = '0';
            j++;
        }
        i++;
    }

    int k = 0;
    while (k < w) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        a[r][c] = '*';
        int x = r - 1;
        while (x <= r + 1) {
            int y = c - 1;
            while (y <= c + 1) {
                if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] != '*')
                    a[x][y]++;
                y++;
            }
            x++;
        }
        k++;
    }

    i = 0;
    while (i < n) {
        int j = 0;
        while (j < m) {
            cout << a[i][j];
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}
