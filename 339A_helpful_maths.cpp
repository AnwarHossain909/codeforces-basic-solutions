#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string expression;
    cin >> expression;
    sort(expression.begin(), expression.end());
    bool first = true;
    for (char ch : expression) {
        if (ch == '+') continue;
        if (!first) cout << '+';
        cout << ch;
        first = false;
    }
    cout << '\n';
    return 0;
}
