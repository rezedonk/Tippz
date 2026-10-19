#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    string s = to_string(x);

    for (int step = 1; step < n; step++) {
        string next = "";
        int i = 0;
        do {
            int count = 1;
            while (i + count < s.size() && s[i + count] == s[i]) count++;
            next += to_string(count);
            next += s[i];
            i += count;
        } while (i < s.size());
        s = next;
    }

    cout << s;
    return 0;
}
