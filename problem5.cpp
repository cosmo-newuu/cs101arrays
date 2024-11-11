#include <iostream>
using namespace std;

void counter(const string &s) {
    int upper = 0, lower = 0;
    string upperc = "", lowerc = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
            upperc += s[i];
            upperc += " ";
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lower++;
            lowerc += s[i];
            lowerc += " ";
        }
    }

    cout << upper << " " << upperc << endl;
    cout << lower << " " << lowerc << endl;
}

int main() {
    string s;
    cin >> s;
    counter(s);
    return 0;
}
