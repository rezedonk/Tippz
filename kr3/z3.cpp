#include <iostream>
#include <string>

using namespace std;

int main() {
    string dateStr = "25.12.2023";

    int pos1 = dateStr.find('.');
    int pos2 = dateStr.find('.', pos1 + 1);

    if (pos1 != string::npos && pos2 != string::npos) {
        string day = dateStr.substr(0, pos1);
        string month = dateStr.substr(pos1 + 1, pos2 - pos1 - 1);
        string year = dateStr.substr(pos2 + 1);

        cout << year << "-" << month << "-" << day << endl;
    }

    return 0;
}
