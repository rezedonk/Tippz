#include <iostream>
#include <string>

using namespace std;

string reverseString(string s) {
    if (s.length() <= 1) {
        return s;
    }
    return s.back() + reverseString(s.substr(0, s.length() - 1));
}

int main() {
    string text = "Привет";
    cout << reverseString(text) << endl;
    return 0;
}
