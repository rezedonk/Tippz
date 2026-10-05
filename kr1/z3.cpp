#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // Настройка русского языка

    // Объявляем переменные типа double
    double a, b, c;
    double result;

    // Блок ввода данных
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;

    // Блок вычислений
    result = 9.6 * a + 5.6 * b - 16.8 * c; // Используем упрощенное выражение: 9.6a + 5.6b - 16.8c

    // Блок вывода результата
    cout << "Значение выражения: " << result << endl;
    
    return 0;
}
