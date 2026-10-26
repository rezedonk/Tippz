#include <iostream>
using namespace std;

// n — сколько ингредиентов
// from — откуда, to — куда, aux — вспомогательная
void hanoi(int n, int from, int to, int aux) {
    if (n == 0) {
        return;                                    // перекладывать нечего
    }

    hanoi(n - 1, from, aux, to);                   // 1) верхние — на вспомогательную
    cout << "Ingredient " << n
         << " move from " << from
         << " to " << to << endl;                  // 2) самый большой — на целевую
    hanoi(n - 1, aux, to, from);                   // 3) верхние — с вспомогательной на целевую
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}
