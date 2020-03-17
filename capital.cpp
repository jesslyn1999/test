#include <bits/stdc++.h>

using namespace std;

void toUpperCase(string *initString) {
    for_each(initString->begin(), initString->end(), [](char & c) {
        c = ::toupper(c);
    });
}

int main() {
    string input;
    getline(cin, input);
    toUpperCase(& input);
    cout << input;
    return 0;
}

