#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin >> ws, text);
    int left = 0, right = static_cast<int>(text.size()) - 1;
    while (left < right) {
        while (left < right && !isalnum(static_cast<unsigned char>(text[left]))) ++left;
        while (left < right && !isalnum(static_cast<unsigned char>(text[right]))) --right;
        if (tolower(static_cast<unsigned char>(text[left])) != tolower(static_cast<unsigned char>(text[right]))) {
            cout << "false\n";
            return 0;
        }
        ++left;
        --right;
    }
    cout << "true\n";
    return 0;
}
