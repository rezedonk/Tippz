#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("input.txt");
    if (!inFile.is_open()) {
        cout << "Ошибка: не удалось открыть файл!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') {
                line[i] = '_';
            }
        }
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
