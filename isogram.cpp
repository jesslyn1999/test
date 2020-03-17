#include <bits/stdc++.h>

using namespace std;

bool checkIsogram(string input) {
    for_each(input.begin(), input.end(), [](char & c) {
        c = ::tolower(c);
    });
//    cout << input << endl;
    size_t i = 0;
    set <char> charSet;
    while (i<input.length() && charSet.find(input[i]) == charSet.end()) {
        charSet.insert(input[i]);
        i++;
    }
    return i>=input.length();
}

int main() {
    string input;
    getline(cin, input);
    cout << checkIsogram(input);
    return 0;
}