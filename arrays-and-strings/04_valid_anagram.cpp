#include <array>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;
    if (first.size() != second.size()) {
        cout << "false\n";
        return 0;
    }
    array<int, 256> count{};
    for (unsigned char ch : first) ++count[ch];
    for (unsigned char ch : second) --count[ch];
    for (int value : count)
        if (value != 0) {
            cout << "false\n";
            return 0;
        }
    cout << "true\n";
    return 0;
}
