#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, value = 0;
    cin >> n;
    while (n--) {
        string operation;
        cin >> operation;
        value += operation.find("++") != string::npos ? 1 : -1;
    }
    cout << value << '\n';
    return 0;
}
