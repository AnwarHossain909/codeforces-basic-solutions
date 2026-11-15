#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;
    transform(first.begin(), first.end(), first.begin(), [](unsigned char c) { return tolower(c); });
    transform(second.begin(), second.end(), second.begin(), [](unsigned char c) { return tolower(c); });
    cout << (first < second ? -1 : first > second ? 1 : 0) << '\n';
    return 0;
}
