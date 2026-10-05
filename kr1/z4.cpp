#include <iostream>
#include <cmath>   // Для sqrt()
#include <string>
using namespace std;

int main() {
    // Русский язык
    setlocale(LC_ALL, "Russian");

    // Ввод коэффициентов
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    // Ввод символа
    char symbol;
    cout << "Введите символ (D, q или a): ";
    cin >> symbol;

    // Выбор действия
    if (symbol == 'D') {
        // ЗАМЕНИ "Ivan Ivanov" НА СВОЁ ИМЯ И ФАМИЛИЮ НА АНГЛИЙСКОМ!
        cout << "Ivan Ivanov" << endl; 
        
    } else if (symbol == 'q') {
        // Решение уравнения ax^2 + bx + c = 0
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    cout << "x - любое действительное число" << endl;
                } else {
                    cout << "Корней нет" << endl;
                }
            } else {
                double x = -c / b;
                cout << "Корень x = " << x << endl;
            }
        } else {
            double d = b * b - 4 * a * c;
            if (d > 0) {
                double x1 = (-b + sqrt(d)) / (2 * a);
                double x2 = (-b - sqrt(d)) / (2 * a);
                cout << "Корни: x1 = " << x1 << ", x2 = " << x2 << endl;
            } else if (d == 0) {
                double x = -b / (2 * a);
                cout << "Корень: x = " << x << endl;
            } else {
                cout << "Действительных корней нет" << endl;
            }
        }
        
    } else if (symbol == 'a') {
        // Вычисление площади прямоугольника
        double side1, side2;
        cout << "Введите первую сторону: ";
        cin >> side1;
        cout << "Введите вторую сторону: ";
        cin >> side2;
        
        double area = side1 * side2;
        cout << "Площадь прямоугольника: " << area << endl;
        
    } else {
        // Обработка ошибки ввода
        cout << "Неизвестный символ!" << endl;
    }

    return 0;
}
